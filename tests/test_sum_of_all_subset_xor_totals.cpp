#include "pch.h"

#include "../solutions/sum_of_all_subset_xor_totals.cpp"

namespace {
    using namespace SumOfAllSubsetXorTotals;

    TEST(SumOfAllSubsetXorTotalsTest, Example1) {
        vector<int> nums = { 1, 3 };
        int expectedSum = 6;
        EXPECT_EQ(expectedSum, subsetXORSum(nums));
    }

    TEST(SumOfAllSubsetXorTotalsTest, Example2) {
        vector<int> nums = { 5, 1, 6 };
        int expectedSum = 28;
        EXPECT_EQ(expectedSum, subsetXORSum(nums));
    }

    TEST(SumOfAllSubsetXorTotalsTest, Example3) {
        vector<int> nums = { 3, 4, 5, 6, 7, 8 };
        int expectedSum = 480;
        EXPECT_EQ(expectedSum, subsetXORSum(nums));
    }
}
