#ifndef _BANK_HPP_
#define _BANK_HPP_

#include "GameObjects.hpp"

class Bank: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Bank(int playernum): GameObjects() {
                SetPieces(0);
                PlayerNum=playernum;
            }

            //void Accept(visitor ObjectVisitor){
                //INSERT VISITOR CODE HERE
            //}

            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
            int GetPlayerNum()
            {
                //cout<<"BANK: ";
                return PlayerNum;
            }
            
};
#endif
