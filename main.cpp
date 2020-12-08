#include "MancalaGame.cpp"
#include "BoardManager.cpp"
#include "MancalaVisitor.cpp"
//#include "DistVisitor.hpp"

int main() {

     //   MancalaGame* newgame = new MancalaGame();
 MancalaGame* game = MancalaGame::getInstance();
game->GameUpdate();
       // newgame->GameUpdate();
}
