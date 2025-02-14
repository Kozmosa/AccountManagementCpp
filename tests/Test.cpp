#include <gtest/gtest.h>
#include "Account.hpp"

TEST(AccountTest, CreateAccount) {
    Account account("2023-01-01", "Salary", 5000);
    EXPECT_EQ(account.id, 1);
    EXPECT_EQ(account.date, "2023-01-01");
    EXPECT_EQ(account.name, "Salary");
    EXPECT_EQ(account.amount, 5000);
}
