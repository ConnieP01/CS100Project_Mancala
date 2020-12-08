#ifndef __MANCALAVISITOR_HPP__
#define __MANCALAVISITOR_HPP__

#include <iostream> 
#include "GameObjects.hpp"
//#include "MancalaGame.hpp"
#include "BoardManager.hpp"

using namespace std;




class MancalaVisitor {
	public: 
		 MancalaVisitor() {;}
		void VisitPocket(GameObjects* p, BoardManager* bm, int count, int i, int j) {
			 p->AddPieces(1);
                        cout<<"Count: " <<count<<endl;
                        cout<<"Pieces: "<<p->GetPieces()<<endl;
                        if((p->GetPieces() == 1) && (count == 0)){
                                int row = i;
                                cout<<"Row: "<<row<<endl;
                                int opposite;
                                int col = j;
                                cout<<"Column: "<<col<<endl;
                                p->SetPieces(0);
                                if(row == 1){
                                        opposite=0;
                                }
                                else if(row == 0){
                                        opposite=1;
                                }
                                int hand = bm->GetNumPieces(opposite,col) + 1;
                                bm->GetObject(opposite,col)->SetPieces(0);

                                if(row == 0) {
                                        bm->GetBank2()->AddPieces(hand);
                                 }
                                else{
                                        bm->GetBank1()->AddPieces(hand);
                                }
			}
		
		}
        void VisitBank(GameObjects* b, BoardManager * bm, int count, int i, int j){b->AddPieces(1);}
	private:
		int addBank = 0;
};

#endif // __MANCALAVISITOR_HPP__ 

