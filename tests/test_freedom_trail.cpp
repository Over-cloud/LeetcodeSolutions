#include "pch.h"

#include "../solutions/freedom_trail.cpp"

namespace {
    TEST(FreedomTrailTest, EmptyKey) {
        string ring;
        string key;
        int minStep = 0;
        EXPECT_EQ(minStep, FreedomTrail::findRotateSteps(ring, key));
    }

    TEST(FreedomTrailTest, Example1) {
        string ring = "godding";
        string key = "gd";
        int minStep = 2 + 2;
        EXPECT_EQ(minStep, FreedomTrail::findRotateSteps(ring, key));
    }

    TEST(FreedomTrailTest, Example2) {
        string ring = "godding";
        string key = "godding";
        int minStep = 6 + 7;
        EXPECT_EQ(minStep, FreedomTrail::findRotateSteps(ring, key));
    }

    TEST(FreedomTrailTest, Secret1) {
        string ring = "caotmcaataijjxi";
        string key = "oatjiioicitatajtijciocjcaaxaaatmctxamacaamjjx";
        int minStep = 137;
        EXPECT_EQ(minStep, FreedomTrail::findRotateSteps(ring, key));
    }

    TEST(FreedomTrailTest, Public1) {
        string ring = "abaacba";
        string key = "bc";
        int minStep = 3 + 2;
        EXPECT_EQ(minStep, FreedomTrail::findRotateSteps(ring, key));
    }
}
