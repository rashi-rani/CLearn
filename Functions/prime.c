//Write a function that determines whether an integer is prime. The
//function should take as input a single integer, and return a 1 if the input is prime, and a 0 if it is not.


#include <stdio.h>

int isprime(int n);

int main()
{
    int a;
    printf("Enter the number to be checked\n");
    scanf("%d",&a);
  printf("isprime(%d)=%d\n", a, isprime(a));
  
  return 0;
}

int isprime(int n) {
    int i,flag=0;
    for(i=2;i<=n;i++){
        if(n%i==0)
        flag=flag+1;
        break;
    }
    if(flag==0){
        return 1;
    } else if(n==2){
        return 1;
    }
    else
    {
        return 0;
    }
    
}