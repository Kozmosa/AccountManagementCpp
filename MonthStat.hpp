#ifndef MONTHSTAT_HPP
#define MONTHSTAT_HPP

#include "StatAggregator.hpp"
#include <vector>
#include <string>

class MonthStat : public StatAggregator {
public:
    double calculateIncome(const std::vector<Account>& accounts) override;
    double calculateExpenditure(const std::vector<Account>& accounts) override;
    double calculateBalance(const std::vector<Account>& accounts) override;
    void displayStatistics(const std::vector<Account>& accounts) override;
};

#endif // MONTHSTAT_HPP
