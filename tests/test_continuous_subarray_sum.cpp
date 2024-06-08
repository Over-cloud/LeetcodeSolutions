#include "pch.h"

#include "../solutions/continuous_subarray_sum.cpp"

namespace {
    using namespace ContinuousSubarraySum;

    TEST(ContinuousSubarraySumTest, Example1) {
        vector<int> nums = { 23,2,4,6,7 };
        int k = 6;
        bool result = true;
        EXPECT_EQ(result, checkSubarraySum(nums, k));
    }

    TEST(ContinuousSubarraySumTest, Example2) {
        vector<int> nums = { 23,2,6,4,7 };
        int k = 6;
        bool result = true;
        EXPECT_EQ(result, checkSubarraySum(nums, k));
    }

    TEST(ContinuousSubarraySumTest, Example3) {
        vector<int> nums = { 23,2,6,4,7 };
        int k = 13;
        bool result = false;
        EXPECT_EQ(result, checkSubarraySum(nums, k));
    }

    TEST(ContinuousSubarraySumTest, Public1) {
        vector<int> nums = { 1,2,3 };
        int k = 6;
        bool result = true;
        EXPECT_EQ(result, checkSubarraySum(nums, k));
    }

    TEST(ContinuousSubarraySumTest, Public2) {
        vector<int> nums = { 6,2,3 };
        int k = 6;
        bool result = false;
        EXPECT_EQ(result, checkSubarraySum(nums, k));
    }
}
