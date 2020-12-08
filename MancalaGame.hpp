#ifndef MANCALAGAME_HPP
#define MANCALAGAME_HPP

#include "BoardManager.hpp"
#include "GameObjects.hpp"
//#include "DistVisitor.hpp"
#include "MancalaVisitor.hpp"

class BoardManager;
class MancalaVisitor;

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
	MancalaVisitor * visit1;
    public:
        MancalaGame();
        void GameUpdate();
        void TakeTurn();
        int MainMenu();
	int getRow();
	int getCol();
	int getCount();
	BoardManager* getObject();
	MancalaGame * thisObject(){return this;}
};
#endif
