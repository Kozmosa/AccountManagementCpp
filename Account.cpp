#include "Account.hpp"
#include <iostream>

int Account::id_counter = 0;  // 初始化静态成员

Account::Account(std::string date, std::string name, double amount)
    : id(++id_counter), date(date), name(name), amount(amount) {}

void Account::display() const {
    std::cout << "ID: " << id << ", Date: " << date << ", Name: " << name << ", Amount: " << amount << std::endl;
}
