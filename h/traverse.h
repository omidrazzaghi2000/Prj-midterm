#ifndef TRAVERSE_H
#define TRAVERSE_H
#include <iostream>
#include <vector>
#include "board.h"
void BFSTraverse(Board  start , Board   goal , int level , int numberOflevels ,Direction formerDirection=Direction::NOTHING);
#endif