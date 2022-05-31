#include <iostream>
#include <vector>

std::vector<int> NUMBERS = {20,-170,110,40,150,-60,90,180,-70,-10,-30,120
                            ,140,130,-50,-160,200,80,-190,100};

int kadane(std::vector <int> list);

int main()
{  
    int max = kadane(NUMBERS);
    std::cout << "Maximum contagious sum is: " << max << std::endl;
}

int kadane(std::vector <int> list){
    int result = 0;
    int temp = 0;

    for(auto& i : list){
        temp += i;
        if(result < temp){
            result = temp;
        }
        if(temp < 0){
            temp = 0;
        }
    }
    return result;
}