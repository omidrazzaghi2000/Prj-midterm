#include "traverse.h"
//helper value

void BFSTraverse(Board  start , Board  goal,int level , Direction formerDirecrtion){
    Board temp = start;
    static bool isFinished = false;
    if(level < 3 &&start.getTable()!=goal.getTable()){
        if(formerDirecrtion!=Direction::DOWN && start.moveEmptyTile(Direction::UP) && !isFinished ){
            std::cout << "UP\n";
            std::cout << level << std::endl;
            start.disp();
            BFSTraverse(start,goal,level+1,Direction::UP);
            start = temp;
            
        }
        if(formerDirecrtion != Direction::UP && start.moveEmptyTile(Direction::DOWN) && !isFinished ){
            std::cout << "DOWN\n";
            std::cout << level << std::endl;
            start.disp();
            BFSTraverse(start,goal,level+1,Direction::DOWN);
            start = temp;
            
            
        }
        if(formerDirecrtion != Direction::RIGHT && start.moveEmptyTile(Direction::LEFT) && !isFinished ){
            std::cout << "LEFT\n";
            std::cout << level << std::endl;
            start.disp();
            BFSTraverse(start,goal,level+1,Direction::LEFT);
            start = temp;
            
        }
        if( formerDirecrtion != Direction::LEFT && start.moveEmptyTile(Direction::RIGHT) && !isFinished ){
            std::cout << "RIGHT\n";
            std::cout << level << std::endl;
            start.disp();
            BFSTraverse(start,goal,level+1,Direction::LEFT);
            start = temp;
            
        }
    }else{
        if(start.getTable()==goal.getTable()){
            std::cout << "QQQQQQQQQQQQQQQQ\n";
            isFinished = true;
            start.disp();
            
        }
        
        
    }

}