#include "pch.h"

#include "../solutions/replace_words.cpp"
#include "../solutions/trie.cpp"

namespace {
    using namespace ReplaceWords;

    TEST(ReplaceWordsTest, Example1) {
        vector<string> dictionary = { "cat","bat","rat" };
        string sentence = { "the cattle was rattled by the battery" };
        string result = { "the cat was rat by the bat" };
        EXPECT_EQ(result, replaceWords(dictionary, sentence));
    }

    TEST(ReplaceWordsTest, Example2) {
        vector<string> dictionary = { "a","b","c" };
        string sentence = { "aadsfasf absbs bbab cadsfafs" };
        string result = { "a a b c" };
        EXPECT_EQ(result, replaceWords(dictionary, sentence));
    }
}
