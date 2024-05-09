#include "pch.h"

#include "../solutions/maximize_happiness_of_selected_children.cpp"

namespace {
    using namespace MaximizeHappinessOfSelectedChildren;

    TEST(MaximizeHappinessOfSelectedChildrenTest, Example1) {
        vector<int> hapiness = { 1,2,3 };
        int k = 2;
        long long output = 4;
        EXPECT_EQ(output, maximumHappinessSum(hapiness, k));
    }

    TEST(MaximizeHappinessOfSelectedChildrenTest, Example2) {
        vector<int> hapiness = { 1,1,1,1 };
        int k = 2;
        long long output = 1;
        EXPECT_EQ(output, maximumHappinessSum(hapiness, k));
    }

    TEST(MaximizeHappinessOfSelectedChildrenTest, Example3) {
        vector<int> hapiness = { 2,3,4,5 };
        int k = 1;
        long long output = 5;
        EXPECT_EQ(output, maximumHappinessSum(hapiness, k));
    }
}
