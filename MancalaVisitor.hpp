#ifndef __MANCALAVISITOR_HPP__
#define __MANCALAVISITOR_HPP__

#include <iostream> 
#include "BoardManager.hpp"
#include "GameObjects.hpp"
#include "MancalaGame.hpp"


using namespace std; 

class BoardManager;
class MancalaVisitor;
class MancalaGame;

class MancalaVisitor {
	  private:
                int addBank = 0; 
		//BoardManager* start = new BoardManager();
	public: 
		 MancalaVisitor() {;}
/*
		virtual void VisitPocket(Pocket* p) = 0;
		virtual void VisitBank(Bank* b) = 0;
*/
		void VisitPocket(GameObjects* p, int i, int j);/*{
			 p->AddPieces(1);
			
			If the last piece you drop is in an empty pocket on your side, you capture that piece and any pieces in the pocket directly
                        opposite.
                        int count = visitB->getCount();
                        if((p->GetPieces() == 1) && (count == 1)){
                                int i = visitB->getRow();
                                int opposite;
                                int j = p->getCol();
                                p->SetPieces(0);
                                if(i == 1){
                                        opposite=0;
                                }
                                else if(i == 0){
                                        opposite=1;
                                }
                                int hand = p->GetNumPieces(opposite,j) + 1;
                                p->GetObject(opposite,j)->SetPieces(0);
                                
                                if(i == 0) {
                                        p->GetBank2()->AddPieces(hand);
                                 }
                                else{
                                        p->GetBank1()->AddPieces(hand);
                                }
                        }
  			
		}*/
        void VisitBank(GameObjects* b, int i, int j);/* {b->AddPieces(1);}*/

};

#endif // __MANCALAVISITOR_HPP__ 

