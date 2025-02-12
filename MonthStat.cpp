#include "MonthStat.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

double MonthStat::calculateIncome(const std::vector<Account>& accounts) {
    double income = 0;
    for (const auto& account : accounts) {
        if (account.amount > 0) {
            std::string month = account.date.substr(5, 2);  // 提取月份
            if (month == "03") {  // 只计算3月的数据
                income += account.amount;
            }
        }
    }
    return income;
}

double MonthStat::calculateExpenditure(const std::vector<Account>& accounts) {
    double expenditure = 0;
    for (const auto& account : accounts) {
        if (account.amount < 0) {
            std::string month = account.date.substr(5, 2);  // 提取月份
            if (month == "03") {  // 只计算3月的数据
                expenditure += account.amount;
            }
        }
    }
    return expenditure;
}

double MonthStat::calculateBalance(const std::vector<Account>& accounts) {
    return calculateIncome(accounts) + calculateExpenditure(accounts);
}

void MonthStat::displayStatistics(const std::vector<Account>& accounts) {
    std::cout << "Month Statistics:\n";
    std::cout << "Income: " << calculateIncome(accounts) << "\n";
    std::cout << "Expenditure: " << calculateExpenditure(accounts) << "\n";
    std::cout << "Balance: " << calculateBalance(accounts) << "\n";
}
