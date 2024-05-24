#include "pch.h"

#include "../solutions/maximum_score_words_formed_by_letters.cpp"

namespace {
    using namespace MaximumScoreWordsFormedByLetters;

    TEST(MaximumScoreWordsFormedByLettersTest, Example1) {
        vector<string> words = { "dog","cat","dad","good" };
        vector<char> letters = { 'a','a','c','d','d','d','g','o','o' };
        vector<int> score = { 1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0 };
        int maxScore = 23; // "dad"-11, "good"-12
        EXPECT_EQ(maxScore, maxScoreWords(words, letters, score));
    }

    TEST(MaximumScoreWordsFormedByLettersTest, Example2) {
        vector<string> words = { "xxxz","ax","bx","cx" };
        vector<char> letters = { 'z','a','b','c','x','x','x' };
        vector<int> score = { 4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10 };
        int maxScore = 27; // "ax"-9, "bx"-9, "cx"-9
        EXPECT_EQ(maxScore, maxScoreWords(words, letters, score));
    }
}
