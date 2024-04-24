#include "pch.h"

#include "../solutions/nth_tribonacci_number.cpp"

namespace {
    TEST(NthTribonacciNumberTest, Default) {
        vector<int> input = { 0,1,2 };
        vector<int> result = { 0,1,1 };
        for (int i = 0; i < input.size(); i++) {
            EXPECT_EQ(result[i], NthTribonacciNumber::tribonacci(input[i]));
        }
    }

    TEST(NthTribonacciNumberTest, Example_1_and_2) {
        vector<int> input =  { 3,4,5,6, 7, 25 };
        vector<int> result = { 2,4,7,13,24,1389537 };
        for (int i = 0; i < input.size(); i++) {
            EXPECT_EQ(result[i], NthTribonacciNumber::tribonacci(input[i]));
        }
    }
}
