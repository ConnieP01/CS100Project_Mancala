#ifndef _MANCALAGAME_HPP
#define _MANCALAGAME_HPP

#include "BoardManager.hpp"
#include "GameObjects.hpp"
//#include "DistVisitor.hpp"
#include "MancalaVisitor.hpp"

class BoardManager;

class MancalaGame {
	private:
        MancalaGame();
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
        MancalaVisitor * visit1 = new MancalaVisitor();
        static MancalaGame* instance;

       public:
        static MancalaGame* getInstance(){
                  return instance;
	}
	void GameUpdate();
        void TakeTurn();
        int MainMenu();
        int getRow();
        int getCol();
        int getCount();
};
#endif
