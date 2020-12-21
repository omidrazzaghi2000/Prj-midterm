#include <iostream>
#include <stdio.h>
#include "board.h"
#include "traverse.h"
int main(){
    Board myBoard{Board(true)};
    myBoard.disp();
    Board goal{Board(false)};
    // BFSTraverse(myBoard,goal,25);
    DFSTraverse(myBoard,goal,25);
    // A_StarTraverse(myBoard,goal,25);
    return 0;
}