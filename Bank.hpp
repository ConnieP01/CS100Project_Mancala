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

            void DepositPieces(int num){
                AddPieces(num); 
            }

            
};
#endif
