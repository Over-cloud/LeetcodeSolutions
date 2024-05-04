#include "pch.h"

#include "../solutions/boats_to_save_peoople.cpp"

namespace {
    using namespace BoatsToSavePeople;

    TEST(BoatsToSavePeopleTest, EmptyArray) {
        vector<int> people;
        int limit = 0;
        int minBoatNum = 0;
        EXPECT_EQ(minBoatNum, numRescueBoats(people, limit));
    }

    TEST(BoatsToSavePeopleTest, Example1) {
        vector<int> people = { 1, 2 };
        int limit = 3;
        int minBoatNum = 1;
        EXPECT_EQ(minBoatNum, numRescueBoats(people, limit));
    }

    TEST(BoatsToSavePeopleTest, Example2) {
        vector<int> people = { 3, 2, 2, 1 };
        int limit = 3;
        int minBoatNum = 3;
        EXPECT_EQ(minBoatNum, numRescueBoats(people, limit));
    }

    TEST(BoatsToSavePeopleTest, Example3) {
        vector<int> people = { 3, 5, 3, 4 };
        int limit = 5;
        int minBoatNum = 4;
        EXPECT_EQ(minBoatNum, numRescueBoats(people, limit));
    }

    TEST(BoatsToSavePeopleTest, Secret1) {
        vector<int> people = { 2, 4 };
        int limit = 5;
        int minBoatNum = 2;
        EXPECT_EQ(minBoatNum, numRescueBoats(people, limit));
    }
}