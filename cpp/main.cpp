#include <iostream>
#include "board.h"

int main(){
    Board myBoard{Board()};
    myBoard.disp();
    myBoard.getBoardSequenceFromUser();
    return 0;
}