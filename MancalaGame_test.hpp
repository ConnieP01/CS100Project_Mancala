#ifndef _MANCALAGAME_TEST_HPP_
#define _MANCALAGAME_TEST_HPP

#include "gtest/gtest.h"

#include "MancalaGame.cpp"
//#include "BoardManager.cpp"

TEST(MainMenu, OptionOne) {
//   MancalaGame* test = new MancalaGame();
   	 MancalaGame* game = MancalaGame::getInstance();
	EXPECT_EQ(game->MainMenu(), 1);
}

TEST(MainMenu, OptionTwo) {
 // MancalaGame* test = new MancalaGame();
  	MancalaGame* game = MancalaGame::getInstance();
	EXPECT_EQ(game->MainMenu(), 2);
}

TEST(MancalaGame, Player1Win) {
 // MancalaGame* test = new MancalaGame();
 	 MancalaGame* game = MancalaGame::getInstance();
	 game->GameUpdate();
	 EXPECT_TRUE(game->getBank1() > game->getBank2());
}
#endif //_MANCALAGAME_TEST_HPP_ 
