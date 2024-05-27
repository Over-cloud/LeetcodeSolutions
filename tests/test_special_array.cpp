#include "pch.h"

#include "../solutions/special_array.cpp"

namespace {
    using namespace SpecialArray;

    TEST(SpecialArrayTest, Example1) {
        vector<int> nums = { 3, 5 };
        int x = 2;
        EXPECT_EQ(x, specialArray(nums));
    }

    TEST(SpecialArrayTest, Example2) {
        vector<int> nums = { 0, 0 };
        int x = -1;
        EXPECT_EQ(x, specialArray(nums));
    }

    TEST(SpecialArrayTest, Example3) {
        vector<int> nums = { 0, 4, 3, 0, 4 };
        int x = 3;
        EXPECT_EQ(x, specialArray(nums));
    }
}
