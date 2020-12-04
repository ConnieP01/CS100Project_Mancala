#include "MancalaGame.hpp"
#include "BoardManager.hpp"
#include "GameObjects.hpp"

//#include visitor
#include <iostream>

using namespace std;

MancalaGame::MancalaGame() {
    BoardManager* newGame = new BoardManager();
}
void MancalaGame::MainMenu() {
    quitGame = true;
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
    
    cin >> option;

    while(!quitGame) {
        if (option == 1) {
           //call BeginGame()
            cout << "Get ready!" << endl;
            BeginGame();
        }
        else if (option == 2) {
            quitGame = true;
        }
        else {
            cout << "Error, input is not valid. Please enter 1 or 2." << endl;
            cin >> option;
        }
    }
    cout << "You have exited the game. Hope you enjoyed Mancala, come again!" << endl;
}

void MancalaGame::BeginGame() {
    score = 0;
    BoardManager* game = new BoardManager();

    while (score < 1) {
        game->DisplayBoard();
        score = game->TallyWinner();
    }

    //game->Winner();
}

void MancalaGame::Winner() {
    quitGame = false;

    cout << "Game Over!" << endl;

    //Winner Screen
    if (score == 1) {
        cout << "Player 1 won!" << endl;
    }
    else {
        cout << "Player 2 won!" << endl;
    }

    cout << "Type 1 to play again." << endl;
    cin >> option;

    while (option != 1) {
        cout << "Invalid input." << endl;
        cin >> option;
    }

    if (option == 1) {
        BeginGame();
    }
}
