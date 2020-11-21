#ifndef _GAMEOBJECTS_HPP_
#define _GAMEOBJECTS_HPP_

#include <vector>
//#include "Pocket.hpp"
//#include "Bank.hpp"

using namespace std;

class GameObjects{
        private:
            int Pieces;
            vector<vector<GameObjects*>> gobjects;
        public:
            GameObjects(){};
            int GetPieces(){ return Pieces; }; //returns current pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            virtual void DepositPieces()=0; //virtual function to deposit a piece inside a gameobject
};
#endif