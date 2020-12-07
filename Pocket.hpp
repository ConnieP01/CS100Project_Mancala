#ifndef _POCKET_HPP_
#define _POCKET_HPP_

#include "GameObjects.hpp"
//#include "visitor.hpp"

//class MancalaVisitor;

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

            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces
            int GetPlayerNum()
            {
                //cout<<"POCKET: ";
                return PlayerNum;
            }

            
};
#endif
