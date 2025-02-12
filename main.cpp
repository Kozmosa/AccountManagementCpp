#include <iostream>
#include <vector>
#include "Account.hpp"
#include "FileManager.hpp"
#include "YearStat.hpp"

int main() {
    std::vector<Account> accounts;
    YearStat yearStat;

    // 模拟数据
    accounts.emplace_back("2023-01-01", "Salary", 5000);
    accounts.emplace_back("2023-02-01", "Rent", -1500);

    // 显示账务信息
    for (const auto& account : accounts) {
        account.display();
    }

    // 输出统计信息
    yearStat.displayStatistics(accounts);

    // 保存账务数据
    FileManager::saveData(accounts, "accounts.txt");

    return 0;
}
