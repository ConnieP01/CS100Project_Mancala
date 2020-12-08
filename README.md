# Mancala
 
 > Authors: <[John Chae](https://github.com/jyjeachae)>, <[Connie Pak](https://github.com/ConnieP01)>,< [Michael He](https://github.com/MSpecter1)>
 


## Project Description
 >  What is Mancala?
 > * Mancala is a two-player strategy game that originated from Ancient Egypt and Ethiopia and was first played around 500 CE. The word mancala is from the Arabic word naqala, which means "to move". The game was brought over to the Americas through slave trade as the slaves brought their culture over. Players in the beginning used seeds and small pebbles as pieces and pits in the ground the board. In modern times, a mancala board and marbles are a common way people play. The board consists of 6 pits on both sides and a larger pit on each end of the board where the seeds are captured. 
 
 > How do you play Mancala?
 > * Players begin by placing an equal number of pieces in each of the pockets except for the banks at each end of the board. The first player picks up all the pieces from the row closest to them and deposits one piece into each following pocket counter-clockwise, including their bank which is the one to the right of them. Each player will avoid their opponent's bank (to the left). After depositing all the pieces, if the last pocket the piece was placed in is empty and on the opponent's side, it is the second player's turn. Otherwise, the player can pick up all pieces in the last placed pocket and continue. 
 > * There are two special rules within the game. The first is that if the last placed piece goes into an empty pocket on the current player's side, then that piece along with the pieces in the opposite pocket are collected and added onto the current player's bank. The second rule is if the last placed piece goes into the current player's bank, then the player has another turn.
 > * When one player's row is empty, then the pieces in the opposite row are added into the other player's bank. Whoever has the most seeds in their banks at the end of the game is the winner. 
 
 >  Why is it important or interesting to you?
 > * This was a game we used to play when we were children, and now that we’re learning more about computer science, it would be interesting to create this game as a program. Although the game seems simple when played in real life, the design will be a lot more complex as it will allow us to implement the design patterns we learned in class. It’ll be fun and interesting to develop this program from scratch using what we’ve learned so far.

 > What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * We plan to use the C++ language, Valgrind for memory leak checks, Git as our version control system, GitHub to host our version control development, and      GoogleTest for testing our project. 
 
 > What will be the input/output of your project?
 > * The input is each player selecting which pocket of pieces on their side of the board they want to move (input row and column).
 > * The output is the current points for each player (number of pieces in their pockets and banks) and displaying the output of the board after each piece is moved. 
 
 > What are the three design patterns you will be using. 
 > * Composite
 >   * We chose this pattern because it helps us organize our board game effectively.
 >   * The “pockets” and the “banks” will be the “part”, and the “GameObjects” class will be the “whole” in the hierarchy.
 >   * The board game array will contain GameObjects
 >   * There will be an interface, BoardManager, that will access an array of GameObjects which will also acces Pockets and Banks. 
 > * Visitor
 >   * We chose this pattern because this allows us to effectively implement the main part of the game to make sure the pieces are currently being moved along the board and the right player’s score is being incremented.
 >   * The “visitor”, will check the class of the current selected array GameObject item and perform an operation on it.
 >   * The visitor will increment the pockets and banks as the player moves the pieces along the board. 
 >   * The visitor will also check to see if the special rules apply for the current play and increment the banks accordingly.
> * Singleton
>   * We chose this pattern because this pattern allows us to have a single instance of Mancala running and the other classes can access and use the resources in the MancalaGame class.
>   * The primary “MancalaGame” class will exist in a single instance during runtime.
>   * Every other class will have access to it.
>   * There can be only one game of Mancala at a time.
>   * The main class will only simulate the Mancala game for the client.
>   * MancalaGame will output the main menu and receive user input to start the game. As the game goes on, the user will input the pocket they want to move, and the board will traverse accordingly, taking into accoont that if the player lands in their own bank with the last piece, then they get another turn.

 > ## Phase II
 > We set up the Kanban board, and we planned out our sprint for 11/15-11/24.
## Class Diagram
 ![Class Diagram](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Class%20Diagram.png)
 > Description:
 > * There are six classes involved: MancalaGame, BoardManager, GameObjects, Pockets, Banks, and MancalaVisit. The key operations are GameUpdate(), MainMenu(), SetStartPieces(), DisplayBoard(), TakeTurn(), and TallyWinner(), and AddPieces(). 
 > * The Composite pattern is for the GameObjects class as well as its inheritance classes, Pockets and Banks. It will be used to help create the board at the beginning of the game. It will also make sure that the player can quit the game and also have it be reset. Pockets should have 4 SetStartPieces() while Banks should have 0. As a result, both classes are two types of GameObjects and this is why we are using the Composite design pattern.
> * The Visitor pattern is for those three classes as well, where the operations are used to make sure the pieces are moved on the board and the correct player’s scores are being incremented throughout the game. It will be used with the currently selected array GameObject item, and the “visitor” will distribute piecse accordingly. This is when the key operations such as AddPieces() will be used. Visitor travels through the array and checks what type of pocket it is. If it is a pocket we do VisitPocket() to increment, and if it is a bank, we do VisitBank(). VisitPocket() has special rules like if the last placed piece goes into an empty pocket on the current player's row, then that piece along with the pieces in the same pocket in the opposite row will be added to the current player's bank.
> * The Singleton pattern is used for the MancalaGame class because it ensures that there is only a single instance of the class running and creates its own unique instance in case there are no instances. The other classes will be able to use and access MancalaGame. If there is already one instance, it will ignore the creation of a new instance. The MancalaGame class uses GameUpdate() to call on MainMenu() to receive the user input (play game or quit), and will create the board using BoardManager as well ask keep count to see who the winner is in the end. As the game goes on, MancalaGame will use TakeTurn() to traverse through the board and also use the MancalaVisit class to increment accordingly, taking into account the special rules.
  
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
  ![Mancala Input](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Mancala%20Input.png)
  ![Mancala Input2](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Mancala%20Input2.png)
  > Continue playing until the end.
  
  ![Mancala Input](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Output.png)
  
 ## Installation/Usage
 > Make a MancalaRunner exe file by doing g++ -std=c++11 -o MancalaRunner.exe main.cpp
 > Open the MancalaRunner exe (./MancalaRunner.exe) to run the program and play the game.
 ## Testing
 > We used google test in order to test different parts of our project at once. These include test cases for adding pieces in the pockets and banks of our Mancala game board, getting the number of pieces at a certain pocket, and testing to see if the main menu options work. We also used google test in order to create an integrated test to make sure everything was working together as they should.
 > Three tests for MancalaGame.cpp will run when you run unit_tests: Play option test, quit option test, Player1 wins test. These are done by running the unit test, and then entering 1 (for play) and then 2 (for quit) for the first two tests. For the third test, press 1 to play, then enter the following inputs (these inputs result in player 1 winning the game). Press enter after each number:
1
3
0
3
0
2
1
0
0
5
1
1
0
5
1
2
0
5
1
3
1
4
0
4
1
5
0
1
1
0
0
0
1
1
1
2
0
5
1
3
0
5
1
0
0
4
1
0
0
3
1
0
0
2
1
0
0
1
1
0
0
0
0
