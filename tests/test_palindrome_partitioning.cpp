#include "pch.h"

#include "../solutions/palindrome_partitioning.cpp"

namespace {
    using namespace PalindromePartitioning;

    TEST(PalindromePartitioningTest, EmptyString) {
        string s;
        vector<vector<string>> partitions;
        EXPECT_EQ(partitions, partition(s));
    }

    TEST(PalindromePartitioningTest, Example1) {
        string s = "aab";
        vector<vector<string>> expected = { {"a", "a", "b"},{"aa", "b"} };
        sort(expected.begin(), expected.end());

        vector<vector<string>> actual = partition(s);
        sort(actual.begin(), actual.end());

        EXPECT_EQ(expected, actual);
    }

    TEST(PalindromePartitioningTest, Example2) {
        string s = "a";
        vector<vector<string>> partitions = { {"a"} };

        EXPECT_EQ(partitions, partition(s));
    }
}
