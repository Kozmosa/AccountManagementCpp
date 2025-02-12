#include "FileManager.hpp"
#include <fstream>
#include <iostream>
#include <sstream> // 引入 stringstream

void FileManager::saveData(const std::vector<Account>& accounts, const std::string& filename) {
    std::ofstream file(filename, std::ios::out);
    if (file.is_open()) {
        for (const auto& account : accounts) {
            file << account.id << "," << account.date << "," << account.name << "," << account.amount << "\n";
        }
        file.close();
    } else {
        std::cerr << "Error: Unable to open file for saving data.\n";
    }
}

void FileManager::loadData(std::vector<Account>& accounts, const std::string& filename) {
    std::ifstream file(filename, std::ios::in);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) { // 逐行读取文件内容
            std::stringstream ss(line); // 使用 stringstream 解析每一行
            std::string segment;
            std::vector<std::string> data;

            while (std::getline(ss, segment, ',')) { // 使用逗号作为分隔符提取字段
                data.push_back(segment);
            }

            if (data.size() == 4) { // 确保读取到四个字段 (id, date, name, amount)
                try {
                    int id = std::stoi(data[0]); // 将 ID 转换为 int 类型
                    std::string date = data[1];
                    std::string name = data[2];
                    double amount = std::stod(data[3]); // 将金额转换为 double 类型
                    accounts.emplace_back(date, name, amount); // 创建 Account 对象并添加到 vector
                    Account::id_counter = std::max(Account::id_counter, id); // 更新静态 ID 计数器，确保加载数据后新添加的账单 ID 不会冲突
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: Invalid data format in file - " << e.what() << "\n";
                } catch (const std::out_of_range& e) {
                    std::cerr << "Error: Data out of range - " << e.what() << "\n";
                }
            } else if (!line.empty()) { // 忽略空行，提示格式错误，但仅在非空行情况下提示
                std::cerr << "Error: Invalid data format in line: " << line << " - Expected 4 fields.\n";
            }
        }
        file.close();
        if (!accounts.empty()) {
            Account::id_counter++; // 加载数据后，为新添加的账单准备 ID
        }
    } else {
        std::cerr << "Error: Unable to open file for loading data.\n";
    }
}