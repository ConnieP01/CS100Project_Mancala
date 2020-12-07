#ifndef MANCALAGAME_HPP
#define MANCALAGAME_HPP

#include "BoardManager.hpp"
#include "GameObjects.hpp"
//#include composite
//#include visitor

class BoardManager;

class MancalaGame {
    private:
        int option;
        int again;
        int input;
	int winner;
	int playerTurn;
        int totalPieces;
	int rowInput;
	int colInput;
	int column;
	int counter;
        bool isValid;
        bool playAgain;
        bool sameTurn;
	BoardManager* start = new BoardManager();

    public:
        MancalaGame();
        void GameUpdate();
        void TakeTurn();
        int MainMenu();
	int getRow();
	int getCol();
	int getCount();
};
#endif
