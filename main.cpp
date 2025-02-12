#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cstdlib>
#include "Account.hpp"
#include "FileManager.hpp"
#include "YearStat.hpp"
#include "MonthStat.hpp"
#include "DayStat.hpp"

// 清屏函数
void clearScreen() {
  #ifdef _WIN32
    std::system("cls");
  #else
    std::system("clear");
  #endif
}

void waitForAnyKey() {
    std::cout << "请按任意键继续...";
    std::cin.get(); // 等待用户输入一个字符，包括换行符
    std::cin.get(); // 额外调用一次，用于消耗之前输入可能留下的换行符
}

void showMenu() {
    clearScreen();
    std::cout << "\n===== 账本管理系统 =====\n";
    std::cout << "1. 添加账务\n";
    std::cout << "2. 删除账务\n";
    std::cout << "3. 查看所有账务\n";
    std::cout << "4. 统计账务\n";
    std::cout << "5. 保存账务数据\n";
    std::cout << "6. 加载账务数据\n";
    std::cout << "7. 退出\n";
    std::cout << "请选择操作: ";
}

void addAccount(std::vector<Account>& accounts) {
    std::string date, name;
    double amount;
    
    std::cout << "请输入账务日期 (YYYY-MM-DD): ";
    std::cin >> date;
    std::cout << "请输入账务名称: ";
    std::cin >> name;
    std::cout << "请输入账务金额: ";
    std::cin >> amount;
    
    accounts.emplace_back(date, name, amount);
    std::cout << "账务已添加!\n";
}

void deleteAccount(std::vector<Account>& accounts) {
    int id;
    std::cout << "请输入要删除的账务ID: ";
    std::cin >> id;
    
    auto it = std::remove_if(accounts.begin(), accounts.end(), [id](const Account& acc) {
        return acc.id == id;
    });

    if (it != accounts.end()) {
        accounts.erase(it, accounts.end());
        std::cout << "账务已删除!\n";
    } else {
        std::cout << "未找到ID为 " << id << " 的账务。\n";
    }
}

void displayAllAccounts(const std::vector<Account>& accounts) {
    if (accounts.empty()) {
        std::cout << "当前没有账务数据。\n";
    } else {
        std::cout << "\n===== 所有账务 =====\n";
        for (const auto& account : accounts) {
            account.display();
        }
    }
}

void displayStatistics(const std::vector<Account>& accounts, StatAggregator& stat) {
    stat.displayStatistics(accounts);
}

int main() {
    std::vector<Account> accounts;
    YearStat yearStat;
    MonthStat monthStat;
    DayStat dayStat;
    
    int choice;
    bool running = true;

    while (running) {
        showMenu();

        // 增加错误处理，提高鲁棒性
        if (!(std::cin >> choice)) { // 检查输入是否成功
            std::cout << "输入无效，请重新输入数字选项。\n";
            std::cin.clear(); // 清除错误状态
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 忽略错误输入行
            continue; // 跳过本次循环剩余部分，重新显示菜单并等待输入
        }

        
        switch (choice) {
            case 1:
                addAccount(accounts);
                break;
            case 2:
                deleteAccount(accounts);
                break;
            case 3:
                displayAllAccounts(accounts);
                break;
            case 4:
                int statChoice;
                std::cout << "请选择统计方式:\n";
                std::cout << "1. 按年统计\n";
                std::cout << "2. 按月统计\n";
                std::cout << "3. 按天统计\n";
                std::cout << "请选择: ";
                std::cin >> statChoice;
                if (statChoice == 1) {
                    displayStatistics(accounts, yearStat);
                } else if (statChoice == 2) {
                    displayStatistics(accounts, monthStat);
                } else if (statChoice == 3) {
                    displayStatistics(accounts, dayStat);
                } else {
                    std::cout << "无效的选择。\n";
                }
                break;
            case 5:
                FileManager::saveData(accounts, "accounts.txt");
                std::cout << "账务数据已保存。\n";
                break;
            case 6:
                FileManager::loadData(accounts, "accounts.txt");
                std::cout << "账务数据已加载。\n";
                break;
            case 7:
                std::cout << "退出程序。\n";
                running = false;
                break;
            default:
                std::cout << "无效的选项，请重新选择。\n";
                break;
        }
        waitForAnyKey();
    }

    return 0;
}
