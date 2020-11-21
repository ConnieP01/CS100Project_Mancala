#include <iostream>

#include "BoardManager.cpp"

int main(int argc, char *argv[])
{
    BoardManager * BManager = new BoardManager();
    BManager->DisplayBoard();
    BManager->SetStartPieces();
    BManager->DisplayBoard();
}