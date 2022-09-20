#include <cstdlib>
#include <iostream>
#include "test.hh"


int searchSmallestMissing(int* A, int left, int right){
  if(A[left+1] == A[right]){
    return EXIT_FAILURE;
  }

  else{
    if(A[left+1] - A[left] == 1 ){
    return searchSmallestMissing(A, left+1, right);
    }
    else{
      return A[left]+1;
    }
  }
}