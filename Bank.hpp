#ifndef _BANK_HPP_
#define _BANK_HPP_

#include "GameObjects.hpp"
#include "MancalaVisitor.hpp"
#include "BoardManager.hpp"
class Bank: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Bank(int playernum): GameObjects() {
                SetPieces(0);
                PlayerNum=playernum;
            }

          	void Accept(MancalaVisitor* visitor, BoardManager * board){
                visitor->VisitBank(visitor, board);
            }

            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
        
            int GetPlayerNum()
            {
                return PlayerNum;
            }
            
};
#endif
