#ifndef _BANK_HPP_
#define _BANK_HPP_

#include "GameObjects.hpp"
#include "visitor.hpp"

class MancalaVisitor;

class Bank: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Bank(int playernum): GameObjects() {
                SetPieces(0);
                PlayerNum=playernum;
            }

	void Accept(MancalaVisitor* visitor){
                visitor->VisitBank(this);
            }

            int GetPlayerNum()
            {
                //cout<<"BANK: ";
                return PlayerNum;
            }
            
};
#endif
