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

            void Accept(visitor ObjectVisitor){
                //INSERT VISITOR CODE HERE
            }

            int GetPlayerNum()
            {
                return PlayerNum;
            }
            
};
#endif
