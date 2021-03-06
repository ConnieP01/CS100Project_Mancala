#include "MancalaGame.hpp"
#include "BoardManager.hpp"
#include "GameObjects.hpp"

//#include visitor
#include <iostream>

using namespace std;

MancalaGame::MancalaGame() {
        int option = 0;
        int again = 0;
        int input = 0;
        int winner = 0;
        int totalPieces = 0;
        int rowInput = 0;
	int colInput = 0;
	int column = 0;
	int counter = 0;
	int PlayerTurn = 0;
	int bank1 = 0;
	int bank2 = 0;
        bool isValid = false;
        bool playAgain = true;
        bool sameTurn = false;
}

MancalaGame* MancalaGame::instance = new MancalaGame();

void MancalaGame::GameUpdate(){
        playerTurn = 1;

        input = MainMenu();
        playAgain = true;

        if(input != 1){
                return;
        }

        while(playAgain == true){
                start->SetStartPieces();
                start->DisplayBoard();
                winner = 0;
                while(winner == 0){
                        TakeTurn();
                        start->DisplayBoard();
                        if(sameTurn == false){
                                playerTurn++;
                        }
                        else{
                                 cout << "Last piece ended in your bank. Go again!" << endl;
                        }
                        winner = start->TallyWinner();
                }
                if(winner != 3){
                        for(int i = 0; i < 2; i++){
                                for(int j = 0; j < 6; j++){
                              			start->GetObject(i, j)->SetPieces(0);
                                }
                        }
			bank1 = start->GetObject(1, 6)->GetPieces();
			bank2 = start->GetObject(0, 6)->GetPieces();
                        start->DisplayBoard();
			cout << "Player " << winner << " wins!" << endl;
                }
                else{
                        cout << "It's a tie!" << endl;
                }
                cout << "Type 1 to play again, type 2 to quit!" << endl;
                cin >> input;

                if(input != 1){
                        while(input != 1 && input != 2){
                                 cout << "Error, input is not valid. Please enter 1 or 2." << endl;
                                 cin >> input;
                        }
                        if (input == 2){
                                playAgain = false;
                                cout << "You have exited the game. Hope you enjoyed Mancala, come again!" << endl;
                        }
                }
        }
}

void MancalaGame::TakeTurn() {
        int turn = 1;
        sameTurn = false;
        string topBot = "bottom row (1)";

        if(playerTurn%2 == 0){
                turn = 2;
                topBot = "top row (0)";
        }
        cout << "It's Player " << turn << "'s turn. Please choose from " << topBot << "." << endl;
        cout << "Choose which pocket you want to move (Type row #, enter, and then  col #, then enter)?" << endl;
        cin >> rowInput >> colInput;
        cout << "Selected pocket has " << start->GetNumPieces(rowInput, colInput) << endl;


	counter = start->GetNumPieces(rowInput, colInput);
	start->GetObject(rowInput, colInput)->SetPieces(0);

	column = colInput;
	
	while(counter > 0) {
		if(rowInput == 0){
			column--;
			while(counter > 0 && column >= 0){
				//start->GetObject(rowInput, column)->AddPieces(1);
				start->GetObject(rowInput, column)->Accept(visit1);
				column--;
				counter--;
			}
			if(counter > 0 && playerTurn%2 == 0)
                        {
	                        //start->GetBank2()->AddPieces(1);
	                        start->GetBank2()->Accept(visit1);
				column--;	
				counter--;

                        }
                        if (counter > 0)
                        {
                                column = -1;
                                rowInput = 1;
                        }
                        else{
                                break;
                        }
                }
                else if(rowInput == 1){
                        column++;
                        while(counter > 0 && column <= 5){
                               // start->GetObject(rowInput, column)->AddPieces(1);
				start->GetObject(rowInput, column)->Accept(visit1);
                                column++;
                                counter--;
                        }
                        if(counter > 0 && playerTurn%2 == 1)
                        {
                               // start->GetBank1()->AddPieces(1);
                               start->GetBank1()->Accept(visit1);
                                column++;
                                counter--;
                        }
                        if(counter > 0)
                        {
                                column = 6;
                                rowInput = 0;
                        }
                        else{
                                break;
                        }
                }
        }
        counter = 0;
        if((rowInput == 1 && column == 7) || (rowInput == 0 && column == -2)){
                sameTurn = true;
        }
}

int MancalaGame::MainMenu() {
    isValid = false;
    option = 0;

    //Welcome
    cout << "Welcome to Mancala!" << endl;

    //How to play:
    cout << endl;
    cout << "Players begin by placing an equal number of pieces in each of the pockets except for the banks at each end of the board." << endl;
    cout << "The first player picks up all the pieces from the row closest to them and deposits one piece into each following pocket counter-clockwise, " << endl;
    cout << "including their bank which is the one to the right of them. Each player will avoid their opponent's bank (to the left)." << endl;
    cout << "After depositing all the pieces, if the last pocket the piece was placed in is empty and on the opponent's side, it is the " << endl;
    cout << "second player's turn. Otherwise, the player can pick up all pieces in the last placed pocket and continue." << endl;
    cout << endl;
    cout << "SPECIAL RULES:" << endl;
    cout << "1. If the last placed piece goes into an empty pocket on the current player's side, then that piece along with the pieces in the " << endl;
    cout << "   opposite pocket are collected and added onto the current player's bank." << endl;
    cout << "2. If the last placed piece goes into the current player's bank, then the player has another turn." << endl;
    cout << endl;
    cout << "HOW TO WIN:" << endl;
    cout << "When one player's row is empty, then the pieces in the opposite row are added into the other player's bank." << endl;
    cout << "Whoever has the most seeds in their banks at the end of the game is the winner." << endl;
    cout << endl;

    //Options:
    cout << "What would you like to do? Enter a number." << endl;
    cout << "1) Play Game" << endl;
    cout << "2) Quit Game" << endl;

    while(isValid == false) {
        cin >> option;

        if (option == 1) {
           //call BeginGame()
            cout << "Get ready!" << endl;
            isValid = true;
      //      BeginGame();
        }
        else if (option == 2) {
            isValid = true;
            cout << "You have exited the game. Hope you enjoyed Mancala, come again!" << endl;
        }
        else {
            cout << "Error, input is not valid. Please enter 1 or 2." << endl;
            isValid = false;
        }
   }
   return option;
}

int MancalaGame::getBank1(){
	return bank1;
}

int MancalaGame::getBank2(){
	return bank2;
}

int MancalaGame::getRow(){
	return rowInput;
}

int MancalaGame::getCol(){
	return column;
}

int MancalaGame::getCount(){
	return counter;
}
