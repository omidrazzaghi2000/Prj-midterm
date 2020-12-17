#ifndef TRAVERSE_H
#define TRAVERSE_H
#include <iostream>
#include <vector>
#include <queue>
#include <memory>
#include "board.h"
void DFSTraverse(Board  start , Board   goal  ,int numberOflevels, int level = 0  ,Direction formerDirection=Direction::NOTHING );
// void BFSTraverse(Board start , Board goal ,int numberOfLevel);
class Node{
    public:
        std::shared_ptr<Board> fatherPointer;
        std::shared_ptr<Board> UPchildPointer;
        std::shared_ptr<Board> RIGHTchildPointer;
        Node(std::shared_ptr<Board> fatherPtr,std::shared_ptr<Board> _childrenPointer);
    
};
#endif