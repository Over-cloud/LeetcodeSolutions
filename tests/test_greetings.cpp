#include "pch.h"

#include "../solutions/greetings.cpp"

TEST(GreetingsTest, SayHi) {
    EXPECT_EQ("Hi.", Greetings::sayHi());
}

TEST(GreetingsTest, SayBye) {
    EXPECT_EQ("Bye.", Greetings::sayBye());
}
