#include <board.h>

#include <algorithm>//random_shuffle
#include <ctime>//time
#include <cstdlib>//srand
#include <cstdio>

std::vector<int> Board::getBoardSequenceFromUser(){
    std::cout << "Hello my friend (^_^) :" << std::endl;
    std::cout << "\tPlease enter your sequence like below template : "<< std::endl;
    std::cout << "\t4 3 2 1 5 6 0 7 8" << std::endl;
    std::cout << "\n\tThen we have this table :";
    std::cout << "\n\t\t\t 4 3 2 ";
    std::cout << "\n\t\t\t 1 5 6 ";
    std::cout << "\n\t\t\t 0 7 8 \n";
    std::cout << "Let's do this: ";
    char a[8];
    std::vector<int> Numbers;
    for(int i=0;; i++)
    {
        *(a+i*sizeof(char))=getchar();
        if((int)*(a+i*sizeof(char))!=32/*space*/ && *(a+i*sizeof(char))=='\n'){
            //check is correct or not is it duplicate or not or it has 0 or not check or valid number entered or did not 
            Numbers.push_back((int)*(a+i*sizeof(char))-48);
        }
        if(*(a+i*sizeof(char))=='\n')
        {
            *(a+i*sizeof(char))='\0';
            break;
        }

    }
    return Numbers;
}

Board::Board(bool isRandom){

    std::vector<int> Numbers;
    for(size_t i = 0 ; i < boardSize ; i++){
        for (size_t j = 0 ; j < boardSize ; j++){
            if((i==boardSize-1 && j == boardSize - 1 )){
                //It is last emlement
                Numbers.push_back(0);
            }else
            Numbers.push_back((j+1)+i*boardSize); 
        }
    }
    

    if(isRandom){
        srand((unsigned) time(0));
        std::random_shuffle ( Numbers.begin(), Numbers.end() );//scrambling
        for(size_t i = 0 ; i < boardSize ; i++){
            std::vector<int> Row;
            for (size_t j = 0 ; j < boardSize ; j++){
                Row.push_back(Numbers.at((j)+i*boardSize));
            }
            Table.push_back(Row);
        }        
        
    }else{
        
    }
}

void Board::disp(){
    for(size_t i = 0 ; i < boardSize ; i++){
        for (size_t j = 0 ; j < boardSize ; j++){
            std::cout << std::right << std::setw(5)<<Table.at(i).at(j);
        }
        std::cout << std::endl;
    }
}