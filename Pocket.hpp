#ifndef _POCKET_HPP_
#define _POCKET_HPP_

#include "GameObjects.hpp"

class Pocket: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Pocket(int playernum): GameObjects() {
                SetPieces(4);
                PlayerNum=playernum;
            }

            void DepositPieces(){
                AddPieces(1); //temp
            }

            
};
#endif
