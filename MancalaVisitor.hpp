#ifndef __MANCALAVISITOR_HPP__
#define __MANCALAVISITOR_HPP__

#include <iostream> 
#include "GameObjects.hpp"
//#include "MancalaGame.hpp"
//#include "BoardManager.hpp"

using namespace std;




class MancalaVisitor {
	public: 
		 MancalaVisitor() {;}
		void VisitPocket(GameObjects* p) {
			 p->AddPieces(1);
			
/* 			MancalaGame* game = game->getInstance();
                        int count = game->thisObject()->getCount();
                        cout<<"Count: " <<count<<endl;
                        cout<<"Pieces: "<<p->GetPieces()<<endl;
                        if((p->GetPieces() == 1) && (count == 0)){
                                int row = game->getRow();
                                cout<<"Row: "<<row<<endl;
                                int opposite;
                                int col = game->getCol();
                                cout<<"Column: "<<col<<endl;
                                p->SetPieces(0);
                                if(row == 1){
                                        opposite=0;
                                }
                                else if(row == 0){
                                        opposite=1;
                                }
                                BoardManager* game1 = new BoardManager();
                                game1 = game->getObject();
                                int hand = game1->GetNumPieces(opposite,col) + 1;
                                game1->GetObject(opposite,col)->SetPieces(0);

                                if(row == 0) {
                                        game1->GetBank2()->AddPieces(hand);
                                 }
                                else{
                                        game1->GetBank1()->AddPieces(hand);
                                }
			}
*/		
		}
        void VisitBank(GameObjects* b){b->AddPieces(1);}
	private:
		int addBank = 0;
};

#endif // __MANCALAVISITOR_HPP__ 

