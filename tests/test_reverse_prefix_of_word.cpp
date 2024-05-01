#include "pch.h"

#include "../solutions/reverse_prefix_of_word.cpp"

namespace {
    using namespace ReversePrefixOfWord;

    TEST(ReversePrefixOfWordTest, EmptyStr) {
        string word;
        char c = 'a';
        string reversed;
        EXPECT_EQ(reversed, reversePrefix(word, c));
    }

    TEST(ReversePrefixOfWordTest, Example1) {
        string word = "abcdefd";
        char c = 'd';
        string reversed = "dcbaefd";
        EXPECT_EQ(reversed, reversePrefix(word, c));
    }

    TEST(ReversePrefixOfWordTest, Example2) {
        string word = "xyxzxe";
        char c = 'z';
        string reversed = "zxyxxe";
        EXPECT_EQ(reversed, reversePrefix(word, c));
    }

    TEST(ReversePrefixOfWordTest, Example3) {
        string word = "abcd";
        char c = 'z';
        string reversed = "abcd";
        EXPECT_EQ(reversed, reversePrefix(word, c));
    }
}
