#include "pch.h"

#include "../solutions/relative_ranks.cpp"

namespace {
    using namespace RelativeRanks;

    TEST(RelativeRanksTest, Example1) {
        vector<int> scores = { 5,4,3,2,1 };
        vector<string> ranks = { "Gold Medal","Silver Medal","Bronze Medal","4","5" };
        EXPECT_EQ(ranks, findRelativeRanks(scores));
    }

    TEST(RelativeRanksTest, Example2) {
        vector<int> scores = { 10,3,8,9,4 };
        vector<string> ranks = { "Gold Medal","5","Bronze Medal","Silver Medal","4" };
        EXPECT_EQ(ranks, findRelativeRanks(scores));
    }
}
