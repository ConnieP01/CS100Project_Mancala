//#include "gtest/gtest.h"

#include "MancalaGame.cpp"

TEST(MainMenu, OptionOne) {
    MancalaGame test = new MancalaGame();
    test->MainMenu();

    EXPECT_EQ(test->MainMenu(), "Get ready!");
}

TEST(MainMenu, OptionTwo) {


    EXPECT_EQ(test->MainMenu(), "You have exited the game. Hope you enjoyed Mancala, come again!");
}

TEST(MainMenu, Invalid) {

    EXPECT_EQ(test->MainMenu(), "Error, input is not valid. Please enter 1 or 2.");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
//CMakeList?
