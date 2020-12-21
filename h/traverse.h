#ifndef TRAVERSE_H
#define TRAVERSE_H
#include <iostream>
#include <vector>
#include <queue>
#include <memory>
#include "board.h"
void DFSTraverse(Board  start , Board   goal  ,int numberOflevels, int level = 0  ,Direction formerDirection=Direction::NOTHING );
void BFSTraverse(Board start , Board goal ,int numberOfLevel);
void A_StarTraverse(Board start , Board goal , int numberOfLevel);
class Node{
    public:
        std::shared_ptr<Node> fatherPointer;
        std::shared_ptr<Board> UPchildPointer;
        std::shared_ptr<Board> DOWNchildPointer;
        std::shared_ptr<Board> LEFTchildPointer;
        std::shared_ptr<Board> RIGHTchildPointer;
        class AStarFeatures{
            public:
                int h_score=0;
                int g_score=0;
                int f_score=0;
        };
        AStarFeatures a_star_feature;
        Board table;
        Node(Board table , Direction);
        Node()=default;
        void disp();

    
};
#endif