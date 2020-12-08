#ifndef _MANCALAVISITORTEST_HPP
#define _MANCALAVISITORTEST_HPP

#include "gtest/gtest.h"

#include <iostream>
#include "BoardManager.cpp"

using namespace std;

TEST(MancalaVisitorTest, AddPocket) {
        BoardManager * gameTest = new BoardManager();
        gameTest->SetStartPieces();
        MancalaVisitor* vTest;
        gameTest->GetObject(1,4)->Accept(vTest);
        int hand = gameTest->GetNumPieces(1,4);
        EXPECT_EQ(hand, 5);
}


#endif
