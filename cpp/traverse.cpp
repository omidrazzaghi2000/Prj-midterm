#include "traverse.h"
//helper value

void BFSTraverse(Board  start , Board  goal,int level, int numberOflevels , Direction formerDirecrtion ){
    Board temp = start;
    static std::vector<Board> solution{};

    if(level < numberOflevels && start.getTable()!=goal.getTable()){
        if(formerDirecrtion!=Direction::DOWN && start.moveEmptyTile(Direction::UP)){
            // std::cout << "UP\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            BFSTraverse(start,goal,level+1,numberOflevels,Direction::UP);
            start = temp;
            
        }
        if(formerDirecrtion != Direction::UP && start.moveEmptyTile(Direction::DOWN)){
            // std::cout << "DOWN\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            BFSTraverse(start,goal,level+1,numberOflevels,Direction::DOWN);
            start = temp;
            
            
        }
        if(formerDirecrtion != Direction::RIGHT && start.moveEmptyTile(Direction::LEFT)){
            // std::cout << "LEFT\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            BFSTraverse(start,goal,level+1,numberOflevels,Direction::LEFT);
            start = temp;
            
        }
        if(formerDirecrtion != Direction::LEFT && start.moveEmptyTile(Direction::RIGHT)){
            // std::cout << "RIGHT\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            BFSTraverse(start,goal,level+1,numberOflevels,Direction::LEFT);
            start = temp;
        }
            // std::cout << "Erase all" << std::endl;
            solution.erase(solution.begin() , solution.end());
    }else{
        if(start.getTable()==goal.getTable()){
            std::cout << "Found it\n";
            // start.disp();
            std::cout << "This is solution" << std::endl;
            for (size_t i {0} ; i < solution.size() ; i++){
                
                solution.at(i).disp();
            }
        }
        if(level >= numberOflevels) {
            // std::cout << " Erase Leaf" << std::endl;
            solution.pop_back();
        }
        
        
    }

}

void DFSTraverse(Board start , Board goal){
    if(start.moveEmptyTile(Direction::UP));
}