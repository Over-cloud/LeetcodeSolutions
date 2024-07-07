#include "pch.h"

#include "../solutions/pass_the_pillow.cpp"

namespace {
    using namespace PassThePillow;

    TEST(PassThePillowTest, Example1) {
        int n = 4;
        int time = 5;
        int ith_person = 2;
        EXPECT_EQ(ith_person, passThePillow(n, time));
    }

    TEST(PassThePillowTest, Example2) {
        int n = 3;
        int time = 2;
        int ith_person = 3;
        EXPECT_EQ(ith_person, passThePillow(n, time));
    }
}
