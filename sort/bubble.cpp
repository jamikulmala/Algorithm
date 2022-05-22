#include <iostream>
#include <vector>

std::vector<int> NUMBERS = {20,170,110,40,150,60,90,180,70,10,30,120
                            ,140,130,50,160,200,80,190,100};

std::vector<int> bubble_sort(std::vector <int> list);

int main()
{
    std::cout << "UNSORTED:" << std::endl;
    for(auto& i : NUMBERS){
        std::cout << " " << i;
    }
    std::cout << std::endl;
    
    std::vector <int> sorted = bubble_sort(NUMBERS);
    std::cout << "SORTED:" << std::endl;
    for(auto& k : sorted){
        std::cout << " " << k;
    }
    std::cout << std::endl;
}

std::vector<int> bubble_sort(std::vector <int> list){
    bool changes_made = true;
    while(changes_made){
        changes_made = false;
        for(int j = 0; j < list.size()-1; ++j){
            if(list.at(j) > list.at(j+1)){
                int temp = list.at(j);
                list.at(j) = list.at(j+1);
                list.at(j+1) = temp;
                changes_made = true;
            }
        }
    }
    return list;
}