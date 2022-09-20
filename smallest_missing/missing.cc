#include <cstdlib>
#include <iostream>
#include "test.hh"

int searchSmallestMissingIteration(int* arr, int size){
  int i=0;
  int first = arr[0];
  while(i < size){
    if(first != arr[i]){
      return first;
    }
    ++first;
    ++i;
  }
  return EXIT_FAILURE;
}