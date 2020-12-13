#if !defined(BOARD_H)
#define BOARD_H

#include <vector>
#include <iostream>
#include <iomanip>//setw 
    enum Direction
    {
       UP,
       DOWN,
       LEFT,
       RIGHT
    };  
class Board{
    public:
  
        ~Board()=default;
        Board(bool isRandom=true);
        void disp();
        bool moveEmptyTile(Direction direction);
        std::vector<std::vector<int>> getTable(){return Table;}
        size_t getBoardSize(){return boardSize;}
    private:
        size_t boardSize = 3;
        std::vector<std::vector<int>> Table;
};

#endif // BOARD_H
