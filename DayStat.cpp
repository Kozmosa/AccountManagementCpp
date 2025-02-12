#include "DayStat.hpp"
#include <iostream>

double DayStat::calculateIncome(const std::vector<Account>& accounts) {
    double income = 0;
    for (const auto& account : accounts) {
        if (account.amount > 0) {
            std::string day = account.date.substr(8, 2);  // 提取日期的日部分
            if (day == "01") {  // 只计算1号的数据
                income += account.amount;
            }
        }
    }
    return income;
}

double DayStat::calculateExpenditure(const std::vector<Account>& accounts) {
    double expenditure = 0;
    for (const auto& account : accounts) {
        if (account.amount < 0) {
            std::string day = account.date.substr(8, 2);  // 提取日期的日部分
            if (day == "01") {  // 只计算1号的数据
                expenditure += account.amount;
            }
        }
    }
    return expenditure;
}

double DayStat::calculateBalance(const std::vector<Account>& accounts) {
    return calculateIncome(accounts) + calculateExpenditure(accounts);
}

void DayStat::displayStatistics(const std::vector<Account>& accounts) {
    std::cout << "Day Statistics:\n";
    std::cout << "Income: " << calculateIncome(accounts) << "\n";
    std::cout << "Expenditure: " << calculateExpenditure(accounts) << "\n";
    std::cout << "Balance: " << calculateBalance(accounts) << "\n";
}
