#include <iostream>
#include "board.h"

int main(){
    Board myBoard{Board()};
    myBoard.disp();
    myBoard.moveEmptyTile(Direction::RIGHT);
    myBoard.disp();
    return 0;
}