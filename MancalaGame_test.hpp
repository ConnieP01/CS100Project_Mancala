#ifndef _MANCALAGAME_TEST_HPP_
#define _MANCALAGAME_TEST_HPP

#include "gtest/gtest.h"

#include "MancalaGame.cpp"
//#include "BoardManager.cpp"
TEST(InGameVisitorTest, AddPocket) {
        BoardManager * gameTest = new BoardManager();
        MancalaVisitor* vTest;
        gameTest->GetObject(1,4)->Accept(vTest);
        int hand = gameTest->GetNumPieces(1,4);
        EXPECT_EQ(hand, 5);
}
TEST(InGameVisitorTest, AddBank) {
        BoardManager * gameTest = new BoardManager();
        MancalaVisitor* vTest;
        gameTest->GetBank1()->Accept(vTest);
        int hand = gameTest->GetBank1()->GetPieces();
        EXPECT_EQ(hand, 1);
}
TEST(InGameVisitorTest, AddPocket0) {
        BoardManager * gameTest = new BoardManager();
        MancalaVisitor* vTest;
        gameTest->GetObject(0,3)->Accept(vTest);
        int hand = gameTest->GetNumPieces(0,3);
        gameTest->GetObject(0,3)->SetPieces(0);
        gameTest->GetObject(0,3)->Accept(vTest);
        int newhand = gameTest->GetNumPieces(0,3);
        EXPECT_EQ(hand, 5);
        EXPECT_EQ(newhand, 1);
}
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
