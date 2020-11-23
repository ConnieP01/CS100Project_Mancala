#ifndef MANCALAGAME_HPP
#define MANCALAGAME_HPP

//#include composite
//#include visitor

class MancalaGame {
    public:
        MancalaGame();
        void MainMenu();
        void BeginGame();
        void Winner();
        
        int option;
        bool quitGame;
        int oneScore;
        int twoScore;
};
#endif
