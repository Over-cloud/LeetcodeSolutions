#include "pch.h"

#include "../solutions/number_of_atoms.cpp"

namespace {
    using namespace NumberOfAtoms;

    TEST(NumberOfAtomsTest, Example1) {
        string formula = "H2O";
        string expandedFormula = "H2O";
        EXPECT_EQ(expandedFormula, countOfAtoms(formula));
    }

    TEST(NumberOfAtomsTest, Example2) {
        string formula = "Mg(OH)2";
        string expandedFormula = "H2MgO2";
        EXPECT_EQ(expandedFormula, countOfAtoms(formula));
    }

    TEST(NumberOfAtomsTest, Example3) {
        string formula = "K4(ON(SO3)2)2";
        string expandedFormula = "K4N2O14S4";
        EXPECT_EQ(expandedFormula, countOfAtoms(formula));
    }

    TEST(NumberOfAtomsTest, Secret1) {
        string formula = "Be32";
        string expandedFormula = "Be32";
        EXPECT_EQ(expandedFormula, countOfAtoms(formula));
    }

    TEST(NumberOfAtomsTest, Secret2) {
        string formula = "(F)";
        string expandedFormula = "F";
        EXPECT_EQ(expandedFormula, countOfAtoms(formula));
    }
}
