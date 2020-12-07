#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__


#include "BoardManager.hpp"
#include "MancalaGame.hpp"
#include <iostream> 
#include "GameObjects.hpp"
#include "Bank.hpp"
#include "Pocket.hpp"

class BoardManager;
class GameObjects;
class Pocket;
class Bank; 


class MancalaVisitor {
	public: 
		 MancalaVisitor() {;}
/*
		virtual void VisitPocket(Pocket* p) = 0;
		virtual void VisitBank(Bank* b) = 0;
*/
		void VisitPocket(Pocket* p){ p->AddPieces(1);}
        	void VisitBank(Bank* b){b->AddPieces(1);}

};

#endif // __VISITOR_HPP__ 

