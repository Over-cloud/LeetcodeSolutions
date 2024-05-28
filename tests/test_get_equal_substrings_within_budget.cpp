#include "pch.h"

#include "../solutions/get_equal_substrings_within_budget.cpp"

namespace {
    using namespace GetEqualSubstringWithinBudget;

    TEST(GetEqualSubstringWithinBudgetTest, Example1) {
        string s = "abcd";
        string t = "bcdf";
        int maxCost = 3;
        int maxSubstringSize = 3;
        EXPECT_EQ(maxSubstringSize, equalSubstring(s, t, maxCost));
    }

    TEST(GetEqualSubstringWithinBudgetTest, Example2) {
        string s = "abcd";
        string t = "cdef";
        int maxCost = 3;
        int maxSubstringSize = 1;
        EXPECT_EQ(maxSubstringSize, equalSubstring(s, t, maxCost));
    }

    TEST(GetEqualSubstringWithinBudgetTest, Example3) {
        string s = "abcd";
        string t = "acde";
        int maxCost = 0;
        int maxSubstringSize = 1;
        EXPECT_EQ(maxSubstringSize, equalSubstring(s, t, maxCost));
    }
}
