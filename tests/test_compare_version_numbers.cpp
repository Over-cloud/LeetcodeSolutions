#include "pch.h"

#include "../solutions/compare_version_numbers.cpp"

namespace {
    using namespace CompareVersionNumbers;

    TEST(CompareVersionNumbersTest, EmptyVersions) {
        string version1;
        string version2;
        int result = 0;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }

    TEST(CompareVersionNumbersTest, Example1) {
        string version1 = "1.01";
        string version2 = "1.001";
        int result = 0;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }

    TEST(CompareVersionNumbersTest, Example2) {
        string version1 = "0.1";
        string version2 = "1.1";
        int result = -1;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }

    TEST(CompareVersionNumbersTest, Puplic1) {
        string version1 = "0.00.0";
        string version2 = "0.0";
        int result = 0;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }

    TEST(CompareVersionNumbersTest, Puplic2) {
        string version1 = "0.00.1";
        string version2 = "0.0";
        int result = 1;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }

    TEST(CompareVersionNumbersTest, Secret1) {
        string version1 = "1.2";
        string version2 = "1.10";
        int result = -1;
        EXPECT_EQ(result, compareVersion(version1, version2));
    }
}