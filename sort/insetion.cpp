#include <iostream>
#include <vector>

std::vector<int> NUMBERS = {20,170,110,40,150,60,90,180,70,10,30,120
                            ,140,130,50,160,200,80,190,100};

std::vector<int> insertion_sort(std::vector <int> list);

int main()
{
    std::cout << "UNSORTED:" << std::endl;
    for(auto& i : NUMBERS){
        std::cout << " " << i;
    }
    std::cout << std::endl;
    
    std::vector <int> sorted = insertion_sort(NUMBERS);
    std::cout << "SORTED:" << std::endl;
    for(auto& k : sorted){
        std::cout << " " << k;
    }
    std::cout << std::endl;
}

std::vector<int> insertion_sort(std::vector <int> list){
    for(int i = 0;i < list.size(); ++i){
        int temp = list.at(i);
        int j = i;
        while(j > 0 && temp < list.at(j-1)){
            list.at(j) = list.at(j-1);
            j = j - 1;
        }
        list.at(j) = temp;
    }
    return list;
}