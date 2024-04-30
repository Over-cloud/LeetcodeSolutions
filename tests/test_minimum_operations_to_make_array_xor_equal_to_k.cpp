#include "pch.h"

#include "../solutions/minimum_operations_to_make_array_xor_equal_to_k.cpp"

namespace {
    TEST(MinimumOperationsToMakeArrayXorEqualToKTest, EmptyArr) {
        vector<int> nums;
        int k = 0;
        int minOp = 0;
        EXPECT_EQ(minOp, MinimumOperationsToMakeArrayXorEqualToK::minOperations(nums, k));
    }

    TEST(MinimumOperationsToMakeArrayXorEqualToKTest, Example1) {
        vector<int> nums = { 2,1,3,4 };
        int k = 1;
        int minOp = 2;
        EXPECT_EQ(minOp, MinimumOperationsToMakeArrayXorEqualToK::minOperations(nums, k));
    }

    TEST(MinimumOperationsToMakeArrayXorEqualToKTest, Example2) {
        vector<int> nums = { 2,0,2,0 };
        int k = 0;
        int minOp = 0;
        EXPECT_EQ(minOp, MinimumOperationsToMakeArrayXorEqualToK::minOperations(nums, k));
    }
}
