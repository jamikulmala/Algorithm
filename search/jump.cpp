#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> NUMBERS = {10,20,30,40,50,60,70,80,90,100,110,120
                            ,130,140,150,160,170,180,190,200};

int jump_search(int searched);

int main()
{
    while(true){
    std::cout << "Enter number to be searched for: ";
    int search_for;
    std::cin >> search_for;
    if(search_for == 11){
        exit(0);
    }
    else{
       if(jump_search(search_for) != -1){
            std::cout << "FOUND! " << jump_search(search_for) << std::endl;
        }
        else{
            std::cout << "NOT FOUND!"<<std::endl;
        }
    }
}
}

int jump_search(int searched){
    int last = NUMBERS.size();
    int jump = sqrt(last);
    int first = 0;
    int num = 0;
    while(NUMBERS[std::min(jump,last)-1] < searched){
        num = jump;
        jump += sqrt(last);
        if(num >= last){
            return -1;
        }
    }
    while(NUMBERS[num] < searched){
        ++ num;
        if(num == std::min(jump,last)){
            return -1;
        }
    }
    if(NUMBERS[num] == searched){
        return num;
    }
    return -1;
}