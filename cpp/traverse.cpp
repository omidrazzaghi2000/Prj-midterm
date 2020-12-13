#include "traverse.h"
//helper value

void BFSTraverse(Board  start , Board  goal,int level , Direction formerDirecrtion){
    start.disp();
    int next_level = level+1;
    if(level < 3 && start.getTable()!=goal.getTable() ){
        if(formerDirecrtion!=Direction::DOWN && start.moveEmptyTile(Direction::UP)){
            std::cout << "UP\n";
            std::cout << level << std::endl;
            BFSTraverse(start,goal,next_level,Direction::UP);
            
        }
        if(formerDirecrtion != Direction::UP && start.moveEmptyTile(Direction::DOWN)){
            std::cout << "DOWN\n";
            std::cout << level << std::endl;
            BFSTraverse(start,goal,next_level,Direction::DOWN);
            
        }
        if(formerDirecrtion != Direction::RIGHT && start.moveEmptyTile(Direction::LEFT)){
            std::cout << "LEFT\n";
            std::cout << level << std::endl;
            BFSTraverse(start,goal,next_level,Direction::LEFT);
            
        }
        if( formerDirecrtion != Direction::LEFT && start.moveEmptyTile(Direction::RIGHT)){
            std::cout << "RIGHT\n";
            std::cout << level << std::endl;
            BFSTraverse(start,goal,next_level,Direction::LEFT);
            
        }else {
            // start.disp();
            // std::cout << "^___^ I found it\n"<<std::endl;
            std::cout << "Return ----------->> \n";
            return;
        }
    }else{
        if(start.getTable()==goal.getTable())
        std::cout << "QQQQQQQQQQQQQQQQ\n";

    }

}