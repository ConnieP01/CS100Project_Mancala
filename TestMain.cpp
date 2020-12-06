#include <iostream>

#include "BoardManager.cpp"

int main(int argc, char *argv[])
{
    BoardManager * BManager = new BoardManager();
    BManager->DisplayBoard();
    BManager->SetStartPieces();
    BManager->DisplayBoard();
    //cout<<BManager->GetObject(1,0)->GetPlayerNum()<<" - "<< BManager->GetObject(1,0)->GetPieces()<<endl;
    //cout<<BManager->GetObject(1,1)->GetPlayerNum()<<" - "<< BManager->GetObject(1,0)->GetPieces()<<endl;
    BManager->DisplayBoard();
}