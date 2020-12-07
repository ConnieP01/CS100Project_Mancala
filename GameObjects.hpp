#ifndef _GAMEOBJECTS_HPP_
#define _GAMEOBJECTS_HPP_

#include <vector>
#include "visitor.hpp"

class MancalaVisitor; 

using namespace std;

class GameObjects{
        private:
            int Pieces;
        public:
            GameObjects(){};
            int GetPieces(){ return Pieces; }; //returns current pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            virtual void Accept(MancalaVisitor*)=0; //virtual function to deposit a piece inside a gameobject
            virtual int GetPlayerNum() = 0;
            bool isEmpty(){ 
                if (GetPieces()==0)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }; //check if there are no pieces inside
};
#endif
