#ifndef YEARSTAT_HPP
#define YEARSTAT_HPP

#include "StatAggregator.hpp"
#include <vector>
#include <string>

class YearStat : public StatAggregator {
public:
    double calculateIncome(const std::vector<Account>& accounts) override;
    double calculateExpenditure(const std::vector<Account>& accounts) override;
    double calculateBalance(const std::vector<Account>& accounts) override;
    void displayStatistics(const std::vector<Account>& accounts) override;
};

#endif // YEARSTAT_HPP
