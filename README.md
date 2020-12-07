# Mancala
 
 > Authors: <[John Chae](https://github.com/jyjeachae)>, <[Connie Pak](https://github.com/ConnieP01)>,< [Michael He](https://github.com/MSpecter1)>
 


## Project Description
 >  What is Mancala?
 > * Mancala is a two-player strategy game that originated from Ancient Egypt and Ethiopia and was first played around 500 CE. The word mancala is from the Arabic word naqala, which means "to move". The game was brought over to the Americas through slave trade as the slaves brought their culture over. Players in the beginning used seeds and small pebbles as pieces and pits in the ground the board. In modern times, a mancala board and marbles are a common way people play. The board consists of 6 pits on both sides and a larger pit on each end of the board where the seeds are captured. 
 
 > How do you play Mancala?
 > * Players begin by placing an equal number of beads in each of the pockets or pits except for the pits at the end of the board. Then, the first player picks up all the seeds from one pit from their side of the board and deposits one seed on each following pit, except for the opponent's capture pits, which are located at the end of the board. After depositing all the seeds, if the last pit the seed was placed in is empty, it is the second player's turn. Else, the player can pick up all seeds in the last placed pit and continue. The player's turn ends when last placed pit is empty. Whoever has the most seeds in their capture pit, when all the seeds are placed in the capture pits, wins the game. 
 
 >  Why is it important or interesting to you?
 > * This was a game we used to play when we were children, and now that we’re learning more about computer science, it would be interesting to create this game     as a program. Although the game seems simple when played in real life, the design will be a lot more complex as it will allow us to implement the design      patterns we learned in class. It’ll be fun and interesting to develop this program from scratch using what we’ve learned so far.

 > What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * We plan to use the C++ language, Valgrind for memory leak checks, Git as our version control system, GitHub to host our version control development, and      GoogleTest for testing our project. 
 
 > What will be the input/output of your project?
 > * The input is each player selecting which pocket of beads on their side of the board they want to move.
 > * The output is the current points for each player (number of beads in their bank) and displaying the output of the board after bead movement. Output final board to a text file. 

 > What are the three design patterns you will be using. 
 > * Composite
 >   * We chose this pattern because it helps us organize our board game effectively.
 >   * The “pockets” and the “banks” will be the “part”, and the “GameObjects” class will be the “whole” in the hierarchy.
 >   * The board game array will contain GameObjects
 >   * There will be an interface, BoardManager, that will access an array of GameObjects which will also acces Pockets and Banks. 
 > * Visitor
 >   * We chose this pattern because this allows us to effectively implement the main part of the game to make sure the beads are currently being moved along the board and the right player’s score is being incremented.
 >   * The “visitor”, will check the class of the current selected array GameObject item and perform an operation on it 
 >   * If the player selects pocket 1 during the game, then the visitor will empty the pocket, and begin moving the beads by visiting each item in the array
 >   * If the item is a pocket, it will distribute beads accordingly, but if it visits the player’s bank it will simply increment it or jump past it if it's the opponent’s bank.
> * Singleton
>   * We chose this pattern because this pattern allows us to have a single instance of Mancala running and the other classes can access and use the resources in the MancalaGame class.
>   * The primary “MancalaGame” class will exist in a single instance during runtime.
>   * Every other class will have access to it.
>   * There can be only one game of Mancala at a time.
>   * The main class will only simulate the Mancala game for the client.

 > ## Phase II
 > We set up the Kanban board, and we planned out our sprint for 11/15-11/24.
## Class Diagram
 ![Class Diagram](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Class%20Diagram.png)
 > Description:
 > * There are four classes involved: MancalaGame, GameObjects, Pockets, and Banks. The key operations are BeginGame(), SetStartPieces(), DrawBoard(), TakeTurn(int), and TallyWinner(). 
 > * The Composite pattern is for the GameObjects class as well as its inheritance classes, Pockets and Banks. It will be used to help create the board at the beginning of the game. It will also make sure that the player can quit the game and also have it be reset. Pockets should have 4 SetStartPieces() while Banks should have 0. As a result, both classes are two types of GameObjects and this is why we are using the Composite design pattern.
> * The Visitor pattern is for those three classes as well, where the operations are used to make sure the beads are moved on the board and the correct player’s scores are being incremented throughout the game. It will be used with the currently selected array GameObject item, and the “visitor” will empty the “pocket” if the player selects pocket 1 during the game and begin moving the beads by visiting each item in the array. Otherwise, if the item is a pocket, it will distribute beads accordingly, but if it visits the player’s bank it will simply increment it or jump past it if it's the opponent’s bank. This is when the key operations such as DepositPieces() will be used. Visitor travels through the array and checks what type of pocket it is. If it is a pocket we do SetPiecePocket() and if it is a bank, we do SetPiecesBank. SetPiecePocket has special rules like if the last pocket is full, pick up the pieces in that pocket and continue until the last pocket is empty. 
> * The Singleton pattern is used for the MancalaGame class because it ensures that there is only a single instance of the class running and creates its own unique instance in case there are no instances. The other classes will be able to use and access MancalaGame. If there is already one instance, it will ignore the creation of a new instance.  
  
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
  > * Continue playing until the end.
  ![Mancala Input](https://github.com/cs100/final-project-mhe034-cpak014-jchae007/blob/master/Output.png)
  
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
