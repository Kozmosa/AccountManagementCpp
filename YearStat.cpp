#include "YearStat.hpp"
#include <iostream>

double YearStat::calculateIncome(const std::vector<Account>& accounts) {
    double income = 0;
    for (const auto& account : accounts) {
        if (account.amount > 0) income += account.amount;
    }
    return income;
}

double YearStat::calculateExpenditure(const std::vector<Account>& accounts) {
    double expenditure = 0;
    for (const auto& account : accounts) {
        if (account.amount < 0) expenditure += account.amount;
    }
    return expenditure;
}

double YearStat::calculateBalance(const std::vector<Account>& accounts) {
    return calculateIncome(accounts) + calculateExpenditure(accounts);
}

void YearStat::displayStatistics(const std::vector<Account>& accounts) {
    std::cout << "Yearly Statistics:\n";
    std::cout << "Income: " << calculateIncome(accounts) << "\n";
    std::cout << "Expenditure: " << calculateExpenditure(accounts) << "\n";
    std::cout << "Balance: " << calculateBalance(accounts) << "\n";
}
