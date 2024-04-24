#include "pch.h"

#include "../solutions/open_the_lock.cpp"

namespace {
    TEST(OpenTheLockTest, Example1) {
        std::vector<std::string> deadends = { "0201", "0101", "0102", "1212", "2002" };
        string target = "0202";
        int minTurns = 6;
        EXPECT_EQ(minTurns, OpenTheLock::openLock(deadends, target));
    }

    TEST(OpenTheLockTest, Example2) {
        std::vector<std::string> deadends = { "8888" };
        string target = "0009";
        int minTurns = 1;
        EXPECT_EQ(minTurns, OpenTheLock::openLock(deadends, target));
    }

    TEST(OpenTheLockTest, Example3) {
        std::vector<std::string> deadends = { "8887", "8889", "8878", "8898", "8788", "8988", "7888", "9888" };
        string target = "8888";
        int minTurns = -1;
        EXPECT_EQ(minTurns, OpenTheLock::openLock(deadends, target));
    }

    TEST(OpenTheLockTest, StartIsDeadend) {
        std::vector<std::string> deadends = { "0000" };
        string target = "8888";
        int minTurns = -1;
        EXPECT_EQ(minTurns, OpenTheLock::openLock(deadends, target));
    }
}
