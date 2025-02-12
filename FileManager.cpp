#include "FileManager.hpp"
#include <fstream>
#include <iostream>

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
        int id;
        std::string date, name;
        double amount;
        while (file >> id >> date >> name >> amount) {
            accounts.emplace_back(date, name, amount);
        }
        file.close();
    } else {
        std::cerr << "Error: Unable to open file for loading data.\n";
    }
}
