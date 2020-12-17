#include "traverse.h"
//helper value

void DFSTraverse(Board  start , Board  goal , int numberOflevels,int level ,Direction formerDirection ){
    Board temp = start;
    
    static std::vector<Board> solution;
    static bool finished = false;
    if(level < numberOflevels && start.getTable()!=goal.getTable()){
        if(formerDirection!=Direction::DOWN && start.moveEmptyTile(Direction::UP) && !finished){
            // std::cout << "UP\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            DFSTraverse(start,goal,numberOflevels,level+1,Direction::UP);
            start = temp;
            
        }
        if(formerDirection != Direction::UP && start.moveEmptyTile(Direction::DOWN) && !finished){
            // std::cout << "DOWN\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            DFSTraverse(start,goal,numberOflevels,level+1,Direction::DOWN);
            start = temp;
            
            
        }
        if(formerDirection != Direction::RIGHT && start.moveEmptyTile(Direction::LEFT) && !finished){
            // std::cout << "LEFT\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            DFSTraverse(start,goal,numberOflevels,level+1,Direction::LEFT);
            start = temp;
            
        }
        if(formerDirection != Direction::LEFT && start.moveEmptyTile(Direction::RIGHT) && !finished){
            // std::cout << "RIGHT\n";
            // std::cout << level << std::endl;
            // start.disp();
            solution.push_back(start);
            DFSTraverse(start,goal,numberOflevels,level+1,Direction::RIGHT);
            start = temp;
        }
            if(solution.size() > 0)
            solution.pop_back();
            if(level == 0 && !finished){
                std::cout << "Ops I can't find solution\n";
            }
            // std::cout << "Erase all" << std::endl;
            // solution.erase(solution.begin() , solution.end());
    }else{
        if(start.getTable()==goal.getTable()){
            std::cout << "I found it\n";
            // start.disp();
            std::cout << "This is solution with "<< level <<" steps." << std::endl;
            for (size_t i {0} ; i < solution.size() ; i++){
                solution.at(i).disp();
            }

            finished = true;

        }
        if(level >= numberOflevels) {
            // std::cout << " Erase Leaf" << std::endl;
            solution.pop_back();
            
        }
        
        
    }

}
Node::Node(std::shared_ptr<Board> fatherPtr,std::shared_ptr<Board>  _childrenPointer){
    fatherPointer = fatherPtr;
    childrenPointer = _childrenPointer;
}


void BFSTraverse(Board start , Board goal){
    Board temp;
    for (size_t DirectionCounter {0} ; DirectionCounter < 4 ; DirectionCounter++){
        switch (DirectionCounter)
        {
        case 1:
            /* UP */
            if(start.moveEmptyTile(Direction::UP)){
                Node::Node(std::shared_ptr<Board>(&temp),nullptr);
            }
            break;
        
        default:
            break;
        }
    }
}



