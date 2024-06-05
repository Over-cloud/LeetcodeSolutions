#include "pch.h"

#include "../solutions/find_common_characters.cpp"

namespace {
    using namespace FindCommonCharacters;

    TEST(FindCommonCharactersTest, Example1) {
        vector<string> words = { "bella","label","roller" };
        vector<string> characters = { "e","l","l" };
        EXPECT_EQ(characters, commonChars(words));
    }
}
