#include "pch.h"

#include "../solutions/find_the_maximum_sum_of_node_values.cpp"

namespace {
    using namespace FindTheMaximumSumOfNodeValues;

    TEST(FindTheMaximumSumOfNodeValuesTest, Example1) {
        vector<int> nums = { 1, 2, 1 };
        int k = 3;
        vector<vector<int>> edges = { {0, 1}, {0, 2} };
        int expectedSum = 6;
        EXPECT_EQ(expectedSum, maximumValueSum(nums, k, edges));
    }

    TEST(FindTheMaximumSumOfNodeValuesTest, Example2) {
        vector<int> nums = { 2, 3 };
        int k = 7;
        vector<vector<int>> edges = { {0, 1} };
        int expectedSum = 9;
        EXPECT_EQ(expectedSum, maximumValueSum(nums, k, edges));
    }

    TEST(FindTheMaximumSumOfNodeValuesTest, Example3) {
        vector<int> nums = { 7, 7, 7, 7, 7, 7 };
        int k = 3;
        vector<vector<int>> edges = { {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5} };
        int expectedSum = 42;
        EXPECT_EQ(expectedSum, maximumValueSum(nums, k, edges));
    }

    TEST(FindTheMaximumSumOfNodeValuesTest, Secret1) {
        vector<int> nums = { 24, 78, 1, 97, 44 };
        int k = 6;
        vector<vector<int>> edges = { {0, 2}, {1, 2}, {4, 2}, {3, 4} };
        int expectedSum = 260;
        EXPECT_EQ(expectedSum, maximumValueSum(nums, k, edges));
    }
}
