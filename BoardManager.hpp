#ifndef _BOARDMANAGER_HPP_
#define _BOARDMANAGER_HPP_

#include <iostream>
#include "Pocket.hpp"
#include "Bank.hpp"
#include "GameObjects.hpp"

using namespace std;

class BoardManager{
        private:
            int row = 2;
            int col = 7;
            int bankindex = 6;
            GameObjects* gobjects[2][7]; //The game board is an array, columns 0->5 is pockets, 6 is the bank of the player

        public:
            BoardManager();
            int GetNumPieces(int side, int index); //get the number of pieces inside a pocket/bank
            GameObjects* GetObject(int side, int index); //gets the object at the index
            GameObjects* GetBank2(){return GetObject(0,6);}; //returns p2's bank as a GameObject pointer
            GameObjects* GetBank1(){return GetObject(1,6);}; //returns p1's bank
            void SetStartPieces(); //use at start of the game, creates initial gameobjects
            int TallyWinner(); //check if the game should end, then check who won (0 for noone, 1 for 1, 2 for 2)
            void DisplayBoard(); //displays board
};
#endif
