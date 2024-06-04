#include "pch.h"

#include "../solutions/longest_palindrome.cpp"

namespace {
    using namespace LongestPalindrome;

    TEST(LongestPalindromeTest, Example1) {
        string s = "abccccdd";
        int len = 7;
        EXPECT_EQ(len, longestPalindrome(s));
    }
}
