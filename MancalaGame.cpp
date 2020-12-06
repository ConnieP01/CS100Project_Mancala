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
        int totalPieces = 0;
        bool isValid = false;
        bool playAgain = true;
}

void MancalaGame::GameUpdate(){
        int PlayerTurn = 1;

        input = MainMenu();
        playAgain = true;

        if(input != 1){
                return;
        }

        while(playAgain == true){
        //      BoardManager* start = new BoardManager();
                start->DisplayBoard();
                int winner = 0;
                while(winner == 0){
                        TakeTurn();
                //      winner = start->TallyWinner();
                        winner = 1;
                }
                cout << "Player " << winner << " wins!" << endl;

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
        int rowInput = 0;
        int colInput = 0;

        cout << "Choose which pocket you want to move (Type row #, enter, and then  col #, then enter)?" << endl;
        cin >> rowInput >> colInput;
        cout << "Selected pocket has " << start->GetNumPieces(rowInput, colInput) << endl;




}

int MancalaGame::MainMenu() {
    isValid = false;
    option = 0;

    //Welcome
    cout << "Welcome to Mancala!" << endl;

    //How to play:
    cout << "Players begin by placing an equal number of beads in each of the pockets or pits except for" << endl;
    cout << "the pits at the end of the board. Then, the first player picks up all the seeds from one pit" << endl;
    cout << "from their side of the boardand deposits one seed on each following pit, except for the opponent's " << endl;
    cout << "capture pits, which are located at the end of the board. After depositing all the seeds, if the last" << endl;
    cout << "pit the seed was placed in is empty, it is the second player's turn. Else, the player can pick up " << endl;
    cout << "all seeds in the last placed pitand continue. The player's turn ends when last placed pit is empty." << endl;
    cout << "Whoever has the most seeds in their capture pit, when all the seeds are placed in the capture pits, wins the game." << endl;

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
