#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include <ctime>

class Account {
public:
    static int id_counter;  // 静态成员，用于自动生成账单ID
    int id;
    std::string date;
    std::string name;
    double amount;

    Account(std::string date, std::string name, double amount);
    void display() const;  // 输出账务信息
};

#endif // ACCOUNT_HPP
