//Write a C Program to print Binary Equivalent of an Integer using Recursion

#include <stdio.h>
int binary_conversion(int); 
int main()
  {
  int num, bin;  

  scanf("%d", &num); 
  bin = binary_conversion(num); 
  printf("The binary equivalent of %d is %d\n", num, bin);
  return 0;
  }

int binary_conversion(int x){
if(x==0)
  return 0;
  else
    return(x%2+10* binary_conversion(x/2));
}