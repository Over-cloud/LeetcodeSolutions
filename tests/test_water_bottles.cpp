#include "pch.h"

#include "../solutions/water_bottles.cpp"

namespace {
    using namespace WaterBottles;

    TEST(WaterBottlesTest, Example1) {
        int numBottles = 9;
        int numExchange = 3;
        int drinkCnt = 13;
        EXPECT_EQ(drinkCnt, numWaterBottles(numBottles, numExchange));
    }

    TEST(WaterBottlesTest, Example2) {
        int numBottles = 15;
        int numExchange = 4;
        int drinkCnt = 19;
        EXPECT_EQ(drinkCnt, numWaterBottles(numBottles, numExchange));
    }
}
