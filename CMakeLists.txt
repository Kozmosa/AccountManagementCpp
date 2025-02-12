cmake_minimum_required(VERSION 3.10)
project(AccountBook)

set(CMAKE_CXX_STANDARD 11)
set(GTEST_INCLUDE_DIRS "/usr/src/gtest/include/gtest")

# 查找gtest库
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(account_book main.cpp Account.cpp YearStat.cpp FileManager.cpp StatAggregator.cpp)

# 编译并链接测试
# add_executable(test Account.cpp Test.cpp)
# target_link_libraries(test ${GTEST_LIBRARIES} pthread)
