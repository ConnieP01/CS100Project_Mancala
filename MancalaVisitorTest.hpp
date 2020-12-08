#ifndef _MANCALAVISITOR_TEST_HPP
#define _MANCALAVISITOR_TEST_HPP

#include "gtest/gtest.h"

#include <iostream>
#include "BoardManager.cpp"

using namespace std; 

TEST(MancalaVisitorTest, AddPocket) {
	BoardManager * gameTest = new BoardManager();
	gameTest->SetStartPieces();
	MancalaVisitor* vTest;
	gameTest->GetObject(1,4)->Accept(vTest, 1, 4);
	int hand = gameTest->GetNumPieces(1,4);
	EXPECT_EQ(hand, 5);
}


#endif
