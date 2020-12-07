#ifndef _MANCALAGAME_TEST_HPP_
#define _MANCALAGAME_TEST_HPP

#include "gtest/gtest.h"

#include "MancalaGame.cpp"

TEST(MainMenu, OptionOne) {
   MancalaGame* test = new MancalaGame();
   EXPECT_EQ(test->MainMenu(), 1);
}

TEST(MainMenu, OptionTwo) {
  MancalaGame* test = new MancalaGame();
  EXPECT_EQ(test->MainMenu(), 2);
}

TEST(MancalaGame, Player1Win) {
  MancalaGame* test = new MancalaGame();
  test->GameUpdate();
}
#endif
