#include "MonthStat.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

// 按月统计收支金额
double MonthStat::calculateIncome(const std::vector<Account>& accounts) {
    double income = 0;
    for (const auto& account : accounts) {
        // 提取月份
        std::string month = account.date.substr(5, 2);  // 提取日期中的月份部分
        // 假设统计当前月份的数据
        if (account.amount > 0) income += account.amount;
    }
    return income;
}

double MonthStat::calculateExpenditure(const std::vector<Account>& accounts) {
    double expenditure = 0;
    for (const auto& account : accounts) {
        std::string month = account.date.substr(5, 2);  // 提取日期中的月份部分
        if (account.amount < 0) expenditure += account.amount;
    }
    return expenditure;
}

double MonthStat::calculateBalance(const std::vector<Account>& accounts) {
    return calculateIncome(accounts) + calculateExpenditure(accounts);
}

void MonthStat::displayStatistics(const std::vector<Account>& accounts) {
    std::cout << "Monthly Statistics:\n";
    std::cout << "Income: " << calculateIncome(accounts) << "\n";
    std::cout << "Expenditure: " << calculateExpenditure(accounts) << "\n";
    std::cout << "Balance: " << calculateBalance(accounts) << "\n";
}
