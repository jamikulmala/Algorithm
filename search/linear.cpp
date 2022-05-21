#include <iostream>
#include <vector>

std::vector<int> NUMBERS = {10,20,30,40,50,60,70,80,90,100,110,120
                            ,130,140,150,160,170,180,190,200};

int linear_search(int searched);

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
       if(linear_search(search_for) != -1){
            std::cout << "FOUND! " << linear_search(search_for) << std::endl;
        }
        else{
            std::cout << "NOT FOUND!"<<std::endl;
        }
    }
}
}

int linear_search(int searched){
    int last = NUMBERS.size();
    int first = 0;
    for(int i = first;i < last;++i){
        if(NUMBERS.at(i) == searched){
            return i;
        }
    }
    return -1;
}