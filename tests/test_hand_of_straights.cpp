#include "pch.h"

#include "../solutions/hand_of_straights.cpp"

namespace {
    using namespace HandOfStraights;

    TEST(HandOfStraightsTest, Example1) {
        vector<int> hand = { 1,2,3,6,2,3,4,7,8 };
        int groupSize = 3;
        bool result = true;
        EXPECT_EQ(result, isNStraightHand(hand, groupSize));
    }

    TEST(HandOfStraightsTest, Example2) {
        vector<int> hand = { 1,2,3,4,5 };
        int groupSize = 4;
        bool result = false;
        EXPECT_EQ(result, isNStraightHand(hand, groupSize));
    }
}
