# Mancala
 
 > Authors: <[John Chae](https://github.com/jyjeachae)>, <[Connie Pak](https://github.com/ConnieP01)>,< [Michael He](https://github.com/MSpecter1)>
 


## Project Description
 >  What is Mancala?
 > * Mancala is a two-player strategy game that originated from Ancient Egypt and Ethiopia and was first played around 500 CE. The word mancala is from the Arabic word naqala, which means "to move". The game was brought over to the Americas through slave trade as the slaves brought their culture over. Players in the beginning used seeds and small pebbles as pieces and pits in the ground the board. In modern times, a mancala board and marbles are a common way people play. The board consists of 6 pits on both sides and a larger pit on each end of the board where the seeds are captured. 
 
 > How do you play Mancala?
 > * Players begin by placing an equal number of beads in each of the pockets or pits except for the pits at the end of the board. Then, the first player picks up all the seeds from one pit from their side of the board and deposits one seed on each following pit, except for the opponent's capture pits, which are located at the end of the board. After depositing all the seeds, if the last pit the seed was placed in is empty, it is the second player's turn. Else, the player can pick up all seeds in the last placed pit and continue. The player's turn ends when last placed pit in empty. Whoever has the most seeds in their capture pit, when all the seeds are placed in the capture pits, wins the game. 
 
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
 > * Visitor
 >   * We chose this pattern because this allows us to effectively implement the main part of the game to make sure the beads are currently being moved along the       board and the right player’s score is being incremented.
 >   * The “visitor”, will check the class of the current selected array GameObject item and perform an operation on it 
 >   * If the player selects pocket 1 during the game, then the visitor will empty the pocket, and begin moving the beads by visiting each item in the array
 >   * If the item is a pocket, it will distribute beads accordingly, but if it visits the player’s bank it will simply increment it or jump past it if it's the opponent’s bank.
> * Singleton
>   * We chose this pattern because this pattern allows us to have a single instance of Mancala running and the other classes can access and use the resources in    the Mancala class.
>   * The primary “Mancala” class will exist in a single instance during runtime.
>   * Every other class will have access to it.

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
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
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
