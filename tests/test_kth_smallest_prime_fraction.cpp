#include "pch.h"

#include "../solutions/kth_smallest_prime_fraction.cpp"

namespace {
    using namespace KthSmallestPrimeFraction;

    TEST(KthSmallestPrimeFractionTest, Example1) {
        vector<int> primes = { 1,2,3,5 };
        int k = 3;
        vector<int> pair = { 2,5 };
        EXPECT_EQ(pair, kthSmallestPrimeFraction(primes, k));
    }

    TEST(KthSmallestPrimeFractionTest, Example2) {
        vector<int> primes = { 1,7 };
        int k = 1;
        vector<int> pair = { 1,7 };
        EXPECT_EQ(pair, kthSmallestPrimeFraction(primes, k));
    }
}
