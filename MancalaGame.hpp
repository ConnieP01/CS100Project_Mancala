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
        int totalPieces;
        int quitGame;
        int score;
        //MancalaGame* game = new MancalaGame();

    public:
        MancalaGame();
        void MainMenu();
        void BeginGame();
        void Winner();
};
#endif

