#include "DayStat.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

// 按天统计收支金额
double DayStat::calculateIncome(const std::vector<Account>& accounts) {
    double income = 0;
    for (const auto& account : accounts) {
        std::string day = account.date.substr(8, 2);  // 提取日期中的天部分
        // 假设统计当前日期的数据
        if (account.amount > 0) income += account.amount;
    }
    return income;
}

double DayStat::calculateExpenditure(const std::vector<Account>& accounts) {
    double expenditure = 0;
    for (const auto& account : accounts) {
        std::string day = account.date.substr(8, 2);  // 提取日期中的天部分
        if (account.amount < 0) expenditure += account.amount;
    }
    return expenditure;
}

double DayStat::calculateBalance(const std::vector<Account>& accounts) {
    return calculateIncome(accounts) + calculateExpenditure(accounts);
}

void DayStat::displayStatistics(const std::vector<Account>& accounts) {
    std::cout << "Daily Statistics:\n";
    std::cout << "Income: " << calculateIncome(accounts) << "\n";
    std::cout << "Expenditure: " << calculateExpenditure(accounts) << "\n";
    std::cout << "Balance: " << calculateBalance(accounts) << "\n";
}
