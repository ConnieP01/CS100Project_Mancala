#ifndef _BOARDMANAGER_HPP_
#define _BOARDMANAGER_HPP_

#include <vector>
#include <iostream>
#include "Pocket.hpp"
#include "Bank.hpp"
#include "GameObjects.hpp"

using namespace std;

class BoardManager{
        private:
            //vector<vector<GameObjects*>> gobjects;
            GameObjects* gobjects[2][6];
        public:
            BoardManager();
            int GetNumPieces(int side, int pindex); //get the number of pieces inside a pocket/bank
            void SetStartPieces(); //use at start of the game, creates initial gameobjects
            //bool TallyWinner(); //check if the game should end, then check who won
            //virtual void DepositPieces(); //virtual function to deposit a piece inside a gameobject
            void DisplayBoard(); //displays board
};
#endif