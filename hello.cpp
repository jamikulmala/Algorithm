#include <iostream>

int mystery(int a,int b);
int cross(int adults);
int sumToK(int k);
int sumOfDigits(int number);

int main(){
    int adults = 12345;
    std::cout << sumOfDigits(adults);
}

int mystery(int a, int b){
    int res = 0;
    while(b > 0){
        if(b % 2 == 1){
            res += a;
        }
        a = a*2;
        b = b/2;
    }
    if(res == 0){
        return a;
    }
    else{
        return res;
    }
}

int cross(int adults){
    int kids = 2;
    int adults_wrong = adults;
    int adults_right = 0;
    while(adults_wrong > 0){
        kids -=1;
        adults_wrong -=1;
        adults_right +=1;
        if(adults_wrong > 0){
            kids += 1;
        }
        else{
            break;
            return adults_right;
        }
    }
    return adults_right;
}

/*cross_river(N)]):
kids := 2;
adults_wrong := N;
adults_right := 0;
WHILE adults_wrong > 0
   kids -= 1   || move one kid with boat on adult side of the river
   adults_wrong -=1, adults_right +=1   || one adult moves to the right side of the river with the boat
   IF adults_wrong > 0
      kids +=1   || the second kid moves to the other side of the river with the boat and they return together
   ELSE
       RETURN adults_right
       BREAK   || if all the adults are on the right side of the river break the loop and return the amount of adults on the right side
|| repeat the process until there are no adults on the wrong side of the river left
      */

int sumToK(int k) {
    if (k <= 0) {
      return 0;
    } else {
      return k + sumToK(k-1);
    }
  }

  int sumOfDigits(int number) {
    if (number < 10){
      return number;
    }
    return number % 10 + sumOfDigits(number / 10);
  }