#include <iostream>
#include <vector>

std::vector<int> NUMBERS = {10,20,30,40,50,60,70,80,90,100,110,120
                            ,130,140,150,160,170,180,190,200};

int binary_search(int searched);

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
        if(binary_search(search_for) != -1){
            std::cout << "FOUND! " << binary_search(search_for) << std::endl;
        }
        else{
            std::cout << "NOT FOUND!"<<std::endl;
        }

    }
}
}

int binary_search(int searched){
    int last = NUMBERS.size();
    int first = 0;
    while(first <= last){
        int middle = (first+last)/2;
        if(NUMBERS.at(middle) == searched){
            return middle;
        }
        else if(NUMBERS.at(middle) < searched){
            first = middle+1;
        }
        else if(NUMBERS.at(middle) > searched){
            last = middle-1;
        }
        else{
            return -1;
        }
    }
    return -1;
}