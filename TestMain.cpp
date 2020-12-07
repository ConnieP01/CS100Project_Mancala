#include <iostream>

#include "BoardManager.cpp"

int main(int argc, char *argv[])
{
    BoardManager * BManager = new BoardManager();
    BManager->DisplayBoard();

    cout<<endl<<"--> NEW TEST PLAYER 1 WINS"<<endl;
    BManager->SetStartPieces();
    MancalaVisitor* visit;
    for (int i = 0; i < 1; i++)
    {
        for (int j =0; j < 6; j++)
        {
            BManager->GetObject(i,j)->Accept(visit);
        }
    }
    BManager->GetBank1()->AddPieces(50);
    BManager->DisplayBoard();
    cout<<"THE WINNER: "<<BManager->TallyWinner()<<endl;
    BManager->DisplayBoard();

}