#ifndef _BANK_HPP_
#define _BANK_HPP_

#include "GameObjects.hpp"
#include "MancalaVisitor.hpp"
#include "BoardManager.hpp"
#include "MancalaGame.hpp"
class Bank: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Bank(int playernum): GameObjects() {
                SetPieces(0);
                PlayerNum=playernum;
            }

          	void Accept(MancalaVisitor* visitor, BoardManager * board, int count, int i, int j){
                visitor->VisitBank(this, board, count, i, j);
            }

            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
        
            int GetPlayerNum()
            {
                return PlayerNum;
            }
            
};
#endif
