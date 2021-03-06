#ifndef __BOARDMANAGER_TEST_HPP__
#define __BOARDMANAGER_TEST_HPP__

#include "gtest/gtest.h"

#include "BoardManager.cpp"

TEST(BoardTest, StartGame) {
    BoardManager* test = new BoardManager();
    for (int i = 0; i < 2; i++) //test pockets
    {
        for (int j =0; j < 6; j++)
        {
            EXPECT_EQ(test->GetNumPieces(i,j), 4);
        }
    }
    //check banks
    EXPECT_EQ(test->GetNumPieces(0,6), 0);
    EXPECT_EQ(test->GetNumPieces(1,6), 0);
}

TEST(BoardTest, GetPieces) {
    BoardManager* test = new BoardManager();
	test->GetObject(0,5)->AddPieces(5);
    EXPECT_EQ(test->GetNumPieces(0,5), 9);
}

TEST(BoardTest, GetObject) {
    BoardManager* test = new BoardManager();
    EXPECT_TRUE(test->GetObject(0,0) != nullptr);
}

TEST(BoardTest, GetBanks) {
    BoardManager* test = new BoardManager();
    EXPECT_TRUE(test->GetBank1() != nullptr);
    EXPECT_TRUE(test->GetBank2() != nullptr);
}

TEST(BoardTest, SetStartPieces) {
    BoardManager* test = new BoardManager();
    for (int i = 0; i < 2; i++) //modify pockets
    {
        for (int j =0; j < 6; j++)
        {
            test->GetObject(i,j)->SetPieces(8);
        }
    }

    test->SetStartPieces();
    for (int i = 0; i < 2; i++) //test pockets
    {
        for (int j =0; j < 6; j++)
        {
            EXPECT_EQ(test->GetNumPieces(i,j), 4);
        }
    }
    //check banks
    EXPECT_EQ(test->GetNumPieces(0,6), 0);
    EXPECT_EQ(test->GetNumPieces(1,6), 0);
}

TEST(BoardTest, TallyWinner1) {
    BoardManager* test = new BoardManager();
    test->SetStartPieces();
    for (int i = 0; i < 1; i++)
    {
        for (int j =0; j < 6; j++)
        {
              test->GetObject(i,j)->SetPieces(0);
        }
    }
    test->GetBank1()->AddPieces(50);
    EXPECT_EQ(test->TallyWinner(), 1);
}

TEST(BoardTest, TallyWinner2) {
    BoardManager* test = new BoardManager();
    test->SetStartPieces();
    for (int i = 1; i < 2; i++)
    {
        for (int j =0; j < 6; j++)
        {
             test->GetObject(i,j)->SetPieces(0);
        }
    }
    test->GetBank2()->AddPieces(50);
    EXPECT_EQ(test->TallyWinner(), 2);
}

TEST(MancalaVisitorTest, AddPocket) {
        BoardManager * gameTest = new BoardManager();
        gameTest->SetStartPieces();
        MancalaVisitor* vTest;
        gameTest->GetObject(1,4)->Accept(vTest);
        int hand = gameTest->GetNumPieces(1,4);
        EXPECT_EQ(hand, 5);
}


TEST(MancalaVisitorTest, AddBank) {
        BoardManager * gameTest = new BoardManager();
        MancalaVisitor* vTest;
        gameTest->GetBank1()->Accept(vTest);
        int hand = gameTest->GetBank1()->GetPieces();
        EXPECT_EQ(hand, 1);
}

TEST(MancalaVisitorTest, AddPocket0) {
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
#endif //__BOARDMANAGER_TEST_HPP__
