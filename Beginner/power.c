//Write a C Program to find power of a given number using recursion.

#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;

scanf("%d", &num); 

scanf("%d", &pow); 
result = power(num, pow);
printf("%d^%d is %ld\n", num, pow, result);
return 0;
}

long power(int x,int y){
  long product=1;
  for(int i=1;i<=y;i++){
    product=product*x;
  }
  return product;
}
    