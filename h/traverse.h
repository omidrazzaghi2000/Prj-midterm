#ifndef TRAVERSE_H
#define TRAVERSE_H
#include <iostream>
#include <vector>
#include "board.h"
void BFSTraverse(Board start , Board goal , int level , Direction formerDirection=Direction::UP);
#endif