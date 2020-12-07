#ifndef __MANCALAVISITOR_HPP__
#define __MANCALAVISITOR_HPP__

#include <iostream> 
#include "GameObjects.hpp"

class MancalaVisitor {
	public: 
		 MancalaVisitor() {;}
/*
		virtual void VisitPocket(Pocket* p) = 0;
		virtual void VisitBank(Bank* b) = 0;
*/
		void VisitPocket(GameObjects* p){
			 p->AddPieces(1);
			/*
 			If the last piece you drop is in an empty pocket on your side, you capture that piece and any pieces in the pocket directly
  			opposite.
  			if(p->GetPieces() == 1){
				p->SetPieces(0);
				addBank++;
				start-> 
  			*/
		}
        void VisitBank(GameObjects* b){b->AddPieces(1);}
	private:
		int addBank = 0;
};

#endif // __MANCALAVISITOR_HPP__ 

