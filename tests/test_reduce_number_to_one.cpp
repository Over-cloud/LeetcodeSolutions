#include "pch.h"

#include "../solutions/reduce_number_to_one.cpp"

namespace {
    using namespace ReduceNumberToOne;

    TEST(ReduceNumberToOneTest, Example1) {
        string s = "1101";
        int steps = 6;
        EXPECT_EQ(steps, numSteps(s));
    }

    TEST(ReduceNumberToOneTest, Example2) {
        string s = "10";
        int steps = 1;
        EXPECT_EQ(steps, numSteps(s));
    }

    TEST(ReduceNumberToOneTest, Example3) {
        string s = "1";
        int steps = 0;
        EXPECT_EQ(steps, numSteps(s));
    }
}
