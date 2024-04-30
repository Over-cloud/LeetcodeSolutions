#include "pch.h"

#include "../solutions/number_of_wonderful_substrings.cpp"

namespace {
    TEST(NumberOfWonderfulSubstringsTest, EmptyStr) {
        string word;
        int cnt = 0;
        EXPECT_EQ(cnt, NumberOfWonderfulSubstrings::wonderfulSubstrings(word));
    }

    TEST(NumberOfWonderfulSubstringsTest, Example1) {
        string word = "aba";
        int cnt = 4;
        EXPECT_EQ(cnt, NumberOfWonderfulSubstrings::wonderfulSubstrings(word));
    }

    TEST(NumberOfWonderfulSubstringsTest, Example2) {
        string word = "aabb";
        int cnt = 9;
        EXPECT_EQ(cnt, NumberOfWonderfulSubstrings::wonderfulSubstrings(word));
    }

    TEST(NumberOfWonderfulSubstringsTest, Secret1) {
        string word = "ehaehcjjaafjdceac";
        int cnt = 29;
        EXPECT_EQ(cnt, NumberOfWonderfulSubstrings::wonderfulSubstrings(word));
    }
}
