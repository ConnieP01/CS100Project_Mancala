#include "BoardManager.hpp"

BoardManager::BoardManager() 
{
    //create board, 2d vector, set each space as a pocket/bank
    for (int i = 0; i < 2; i++)
    {
        for (int j =0; j < 6; j++)
        {
            //cout<<"Created Pocket, row: "<<i<<", column: "<<j<<endl;
            Pocket* x = new Pocket(i);
            //cout<< x->GetPieces() <<endl;
            gobjects[i][j] = x;
        }
    }
    SetStartPieces();
}

int BoardManager::GetNumPieces(int side, int pindex) //get the number of pieces inside a pocket/bank
{
    return gobjects[side][pindex]->GetPieces();
}

void BoardManager::SetStartPieces() //used to set start pieces or restart the board
{
    for (int i = 0; i < 2; i++)
    {
        for (int j =0; j < 6; j++)
        {
            gobjects[i][j]->SetPieces(4);
        }
    }
}

void BoardManager::DisplayBoard()
{
    cout<<endl;
    for (int j =0; j <56; j++) // print player 1's side of the gameboard border
    {
        cout<<"-";
    }
    
    cout<<endl;

    cout<<"| ";
    cout<<"Player 1's Bank"; //16 spaces
    cout<<" |";
    for (int j =0; j < 6; j++) // print player 1's side of the board (18 spaces)
    {
        cout<<"["<<gobjects[0][j]->GetPieces()<<"]"; 
    }
    cout<<"| ";
    cout<<"Player 2's Bank";
    cout<<" |";
    
    cout<<endl;
    for (int j =0; j < 56; j++) // print middle side of the gameboard border
    {
        cout<<"-";
    }
    cout<<endl;

    cout<<"| ";
    cout<<"   (-P1-num)   ";
    cout<<" |";
    for (int j =0; j < 6; j++) // print player 1's side of the board
    {
        cout<<"["<<gobjects[1][j]->GetPieces()<<"]"; 
    }
    cout<<"|";
    cout<<"   (-P2-num)    ";
    cout<<" |";
    cout<<endl;

    for (int j =0; j < 56; j++) // print player 2's side of the gameboard border
    {
        cout<<"-";
    }

    cout<<endl;
    /*
    for (int i = 0; i < 2; i++)
    {
        for (int j =0; j < 6; j++)
        {
            cout<<"|"<<gobjects[i][j]->GetPieces()<<"| "; 
        }
        cout<<endl;
    }
    */
}
