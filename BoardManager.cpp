#include "BoardManager.hpp"

BoardManager::BoardManager() 
{
    //create board, 2d vector, set each space as a pocket/bank
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Pocket* temp = new Pocket(i);
            gobjects[i][j] = temp;
        }
    }

    Bank* temp1 = new Bank(0);
    Bank* temp2 = new Bank(1);
    gobjects[0][bankindex] = temp1;
    gobjects[1][bankindex] = temp2;
    SetStartPieces();
}

int BoardManager::GetNumPieces(int side, int index) //get the number of pieces inside a pocket/bank
{
    return gobjects[side][index]->GetPieces();
}

GameObjects* BoardManager::GetObject(int side, int index)
{
    return gobjects[side][index];
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
    gobjects[0][bankindex]->SetPieces(0);
    gobjects[1][bankindex]->SetPieces(0);
}

int BoardManager::TallyWinner() //returns 0 if noone won, returns 1 for if player 1 won etc
{
    //check for winner
    int sideEmpty = 2;
    int sum;
    for (int i = 0; i < 2; i++)
    {
        sum = 0 ;
        for (int j =0; j < 6; j++)
        {
            if (gobjects[i][j]->isEmpty())
            {
                sum++;
            }
        }
	if (sum == 6)
        {
            sideEmpty=i;
            break;
        }
    }
    //add reamining pieces
    if (sideEmpty == 0) //if player 2's side is empty
    {
        for (int j =0; j < 6; j++) // add all remaining pieces to player 1
        {
            gobjects[1][bankindex]->AddPieces(gobjects[1][j]->GetPieces());

        }
    }
    else if(sideEmpty==1)//if player 1's side is empty
    {
        for (int i =0; i < 6; i++) // add all remaining pieces to player 2
        {
            gobjects[0][bankindex]->AddPieces(gobjects[0][i]->GetPieces());

        }
    }
    else if (sideEmpty==2)
    {
        return 0;
    }
    
    //check who won
    if (gobjects[0][bankindex]->GetPieces()>gobjects[1][bankindex]->GetPieces())
    {
        //P2 Won
        return 2;
    }
    else if(gobjects[0][bankindex]->GetPieces()<gobjects[1][bankindex]->GetPieces())
    {
        //P1 Won
        return 1;
    }
    else
    {
        return 3; //TIE
    }
}

void BoardManager::DisplayBoard()
{
    cout<<endl;
    for (int j =0; j <57; j++) // print player 1's side of the gameboard border
    {
        cout<<"-";
    }
    
    cout<<endl;

    cout<<"| ";
    cout<<"Player 2's Bank"; //16 spaces
    cout<<" |";
    for (int j =0; j < col-1; j++) // print player 1's side of the board (18 spaces)
    {
        cout<<"["<<gobjects[0][j]->GetPieces()<<"]"; 
    }
    cout<<"| ";
    cout<<"Player 1's Bank";
    cout<<" |";
    
    cout<<endl;
    for (int j =0; j < 57; j++) // print middle side of the gameboard border
    {
        cout<<"-";
    }
    cout<<endl;

    cout<<"| ";
    cout<<"       "<< gobjects[0][bankindex]->GetPieces() <<"       "; //16 spaces, 7 spaces on each side of a potential 10s place #
    cout<<" |";
    
    for (int j =0; j < col-1 ; j++) // print player 2's side of the board
    {
        cout<<"["<<gobjects[1][j]->GetPieces()<<"]"; 
    }
    cout<<"|";
    cout<<"       "<< gobjects[1][bankindex]->GetPieces() <<"       "; //16 spaces
    cout<<" |";
    cout<<endl;

    for (int j =0; j < 57; j++) // print player 2's side of the gameboard border
    {
        cout<<"-";
    }

    cout<<endl;
}