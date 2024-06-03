#include "pch.h"

#include "../solutions/append_characters_to_string_to_make_subsequence.cpp"

namespace {
    using namespace AppendCharactersToStringToMakeSubsequence;

    TEST(AppendCharactersToStringToMakeSubsequenceTest, Example1) {
        string s = "coaching";
        string t = "coding";
        int cnt = 4;
        EXPECT_EQ(cnt, appendCharacters(s, t));
    }

    TEST(AppendCharactersToStringToMakeSubsequenceTest, Example2) {
        string s = "abcde";
        string t = "a";
        int cnt = 0;
        EXPECT_EQ(cnt, appendCharacters(s, t));
    }

    TEST(AppendCharactersToStringToMakeSubsequenceTest, Example3) {
        string s = "z";
        string t = "abcde";
        int cnt = 5;
        EXPECT_EQ(cnt, appendCharacters(s, t));
    }
}
