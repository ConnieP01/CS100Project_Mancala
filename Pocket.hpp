#ifndef _POCKET_HPP_
#define _POCKET_HPP_

#include "GameObjects.hpp"
#include "visitor.hpp"

class MancalaVisitor;

class Pocket: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Pocket(int playernum): GameObjects() {
                SetPieces(4);
                PlayerNum=playernum;
            }

            void Accept(MancalaVisitor* visitor){
                visitor->VisitPocket(this);
            }

            int GetPlayerNum()
            {
                //cout<<"POCKET: ";
                return PlayerNum;
            }

            
};
#endif
