#include <iostream>
#include "board.h"
#include "traverse.h"
int main(){
    Board myBoard{Board(false)};
    Board goal{Board(false)};
    BFSTraverse(myBoard,goal,0,2);
    return 0;
}