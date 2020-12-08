#ifndef _POCKET_HPP_
#define _POCKET_HPP_

#include "GameObjects.hpp"
#include "MancalaVisitor.hpp"
class Pocket: public GameObjects {
        private:
            int PlayerNum;
            int PlayerTurn;
        public:
            Pocket(int playernum): GameObjects() {
                SetPieces(4);
                PlayerNum=playernum;
            }

            void Accept(MancalaVisitor* visitor, int i, int j){
                visitor->VisitPocket(this, i, j);
            }


            void AddPieces(int num){ Pieces+=num; } //add a number of pieces
            void SetPieces(int num){ Pieces = num; } //set number of pieces

            int GetPlayerNum()
            {
                return PlayerNum;
            }

            
};
#endif
