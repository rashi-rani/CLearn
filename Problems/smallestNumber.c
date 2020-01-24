/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 15? */

#include<stdio.h>
int prime(int n);
int main(){
    int num=15,i=1,rem;
    long int product=1;
    while(i<=15){
        if(prime(i)==1){
            product=product*i;
            i++;
        }else{
            i++;
        }
    }
    for(i=1;i<15;i++){
        if(product%i==0){
            product;
        }
        else {
          if(i%2==0){
              product=product*2;
          }
          else {
          product=product*3;
          }
            
        }
    
    }
    printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 15 is %ld",product);
    return 0;
} 

int prime(int n){
int j,flag=0;
    for(j=2;j<n;j++){
        if(n%j==0)
        flag=flag+1;
        
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



