#include "pch.h"

#include "../solutions/word_break_II.cpp"

namespace {
    using namespace WordBreakII;

    TEST(WordBreakIITest, Example1) {
        string s = "catsanddog";
        vector<string> wordDict = { "cat", "cats", "and", "sand", "dog" };

        vector<string> expected = { "cats and dog","cat sand dog" };
        sort(expected.begin(), expected.end());

        vector<string> actual = wordBreak(s, wordDict);
        sort(actual.begin(), actual.end());
        EXPECT_EQ(expected, actual);
    }

    TEST(WordBreakIITest, Example2) {
        string s = "pineapplepenapple";
        vector<string> wordDict = { "apple","pen","applepen","pine","pineapple" };

        vector<string> expected = { "pine apple pen apple","pineapple pen apple","pine applepen apple" };
        sort(expected.begin(), expected.end());

        vector<string> actual = wordBreak(s, wordDict);
        sort(actual.begin(), actual.end());
        EXPECT_EQ(expected, actual);
    }

    TEST(WordBreakIITest, Example3) {
        string s = "catsandog";
        vector<string> wordDict = { "cats","dog","sand","and","cat" };

        vector<string> expected = {};

        vector<string> actual = wordBreak(s, wordDict);
        EXPECT_EQ(expected, actual);
    }
}
