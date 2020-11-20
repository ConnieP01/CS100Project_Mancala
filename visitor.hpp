#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

class GameObjects;
class Pocket;
class Bank; 

class MancalaVisitor {
	public: 
		 MancalaVisitor();

		virtual void VisitPocket(Pocket* p);
		virtual void VisitBank(Bank* b);


};

#endif // __VISITOR_HPP__ 

