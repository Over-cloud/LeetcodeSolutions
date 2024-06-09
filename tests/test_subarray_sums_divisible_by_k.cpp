#include "pch.h"

#include "../solutions/subarray_sums_divisible_by_k.cpp"

namespace {
    using namespace SubarraySumsDivisibleByK;

    TEST(SubarraySumsDivisibleByKTest, Example1) {
        vector<int> nums = { 4,5,0,-2,-3,1 };
        int k = 5;
        int result = 7;
        EXPECT_EQ(result, subarraysDivByK(nums, k));
    }

    TEST(SubarraySumsDivisibleByKTest, Example2) {
        vector<int> nums = { 5 };
        int k = 9;
        int result = 0;
        EXPECT_EQ(result, subarraysDivByK(nums, k));
    }
}
