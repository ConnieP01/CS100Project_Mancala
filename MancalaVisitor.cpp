#include <iostream>
#include "MancalaVisitor.hpp"
#include "BoardManager.hpp"
#include "GameObjects.hpp"


using namespace std; 

	void MancalaVisitor :: VisitPocket(GameObjects* p, int i, int j){
                         p->AddPieces(1);
                        //If the last piece you drop is in an empty pocket on your side, you capture that piece and any pieces in the pocket directly
                       // opposite.
                        MancalaGame * game = new MancalaGame();
                        int count = game->thisObject()->getCount();
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
				BoardManager* game1 = new BoardManager();
				game1 = game->getObject();
                                int hand = game1->GetNumPieces(opposite,j) + 1;
                                game1->GetObject(opposite,j)->SetPieces(0);

                                if(i == 0) {
                                        game1->GetBank2()->AddPieces(hand);
                                 }
                                else{
                                        game1->GetBank1()->AddPieces(hand);
                                }
                  }

         }

        void MancalaVisitor :: VisitBank(GameObjects* b, int i, int j){
		b->AddPieces(1);
	}

