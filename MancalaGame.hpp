#ifndef MANCALAGAME_HPP
#define MANCALAGAME_HPP

#include "BoardManager.hpp"
#include "GameObjects.hpp"
//#include "DistVisitor.hpp"
#include "MancalaVisitor.hpp"

class BoardManager;

class MancalaGame {
    private:
        int option;
        int again;
        int input;
	int winner;
	int playerTurn;
        int totalPieces;
        bool isValid;
        bool playAgain;
        bool sameTurn;
	BoardManager* start = new BoardManager();
	MancalaVisitor * visit1 = new MancalaVisitor();
    public:
        MancalaGame();
        void GameUpdate();
        void TakeTurn();
        int MainMenu();
};
#endif
