#ifndef STATAGGREGATOR_HPP
#define STATAGGREGATOR_HPP

#include <vector>
#include "Account.hpp"

class StatAggregator {
public:
    virtual double calculateIncome(const std::vector<Account>& accounts) = 0;
    virtual double calculateExpenditure(const std::vector<Account>& accounts) = 0;
    virtual double calculateBalance(const std::vector<Account>& accounts) = 0;
    virtual void displayStatistics(const std::vector<Account>& accounts) = 0;
    ~StatAggregator();  // 析构函数
};

#endif // STATAGGREGATOR_HPP
