#include <iostream>
#include "board.h"
#include "traverse.h"
int main(){
    Board myBoard{Board(false)};
    Board goal{Board(false)};
    DFSTraverse(myBoard,goal,4);
    return 0;
}