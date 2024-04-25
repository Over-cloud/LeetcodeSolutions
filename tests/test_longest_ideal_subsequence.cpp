#include "pch.h"

#include "../solutions/longest_ideal_subsequence.cpp"

namespace {
    TEST(LongestIdealSubsequenceTest, EmptyString) {
        string s = "";
        int k = 0;
        int result = 0;
        EXPECT_EQ(result, LongestIdealSubsequence::longestIdealString(s, k));
    }

    TEST(LongestIdealSubsequenceTest, Example1) {
        string s = "acfgbd";
        int k = 2;
        int result = 4;
        EXPECT_EQ(result, LongestIdealSubsequence::longestIdealString(s, k));
    }

    TEST(LongestIdealSubsequenceTest, Example2) {
        string s = "abcd";
        int k = 3;
        int result = 4;
        EXPECT_EQ(result, LongestIdealSubsequence::longestIdealString(s, k));
    }

    TEST(LongestIdealSubsequenceTest, Secret1) {
        string s = "lkpkxcigcs";
        int k = 6;
        int result = 7;
        EXPECT_EQ(result, LongestIdealSubsequence::longestIdealString(s, k));
    }
}
