#if !defined(BOARD_H)
#define BOARD_H

#include <vector>
#include <iostream>
#include <iomanip>//setw 

class Board{
    public:
        ~Board()=default;
        Board(bool isRandom=true);
        void disp();
    private:
        size_t boardSize = 3;
        std::vector<std::vector<int>> Table;
};

#endif // BOARD_H
