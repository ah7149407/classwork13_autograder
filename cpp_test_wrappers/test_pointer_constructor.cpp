#include "array.h"

#define LEN 4

int main(int arcg, char* argv[])
{
  int values[] = {12, 13, 14, 15};
  int values_copy[] = {12, 13, 14, 15};
  Array arr(LEN, values);
 
  // Check that arr has same length 
  if(arr.size() != LEN){
      printf("###Expected copied array to have size of %d but got %d###", LEN, arr.size());
      return(0);
  }

  // Check that the values are right
  for(int i = 0; i < LEN; i++){
      if(arr[i] != values[i]){
          printf("###Copied value doesn't match at index %d###", i);
          return(0);
      }
  }

  // Now modify 
  for(int i = 0; i < LEN; i++){
      arr[i] = i;
  }

  // Make sure original array was not modified
  for(int i = 0; i < LEN; i++){
      if(values[i] != values_copy[i]){
          printf("###Original array was modified by copy at index %d###", i);
          return(0);
      }
  }


  printf("###PASS###");

  return(0);
}
