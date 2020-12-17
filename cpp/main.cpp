#include <iostream>
#include "board.h"
#include "traverse.h"
int main(){
    Board myBoard{Board(false)};
    myBoard.disp();
    Board goal{Board(false)};
    DFSTraverse(myBoard,goal,15);
    return 0;
}