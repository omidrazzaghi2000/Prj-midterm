#ifndef TRAVERSE_H
#define TRAVERSE_H
#include <iostream>
#include <vector>
#include <queue>
#include "board.h"
void DFSTraverse(Board  start , Board   goal  ,int numberOflevels, int level = 0  ,Direction formerDirection=Direction::NOTHING );
// void BFSTraverse(Board start , Board goal ,int numberOfLevel);
#endif