#include "MancalaGame.cpp"
#include "BoardManager.cpp"
#include "visitor.hpp"
//#include "DistVisitor.hpp"

int main() {

        MancalaGame* newgame = new MancalaGame();

        newgame->GameUpdate();
}
