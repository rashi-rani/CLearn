// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 1500st prime number?

#include<stdio.h>
int prime(int n);
int main(){
    int n=1500;
    int arr[n],i=2,count=0;
    while(count<n){
        if(prime(i)==1){
            count+=1;
            arr[count]=i;
            i++;
        }
        else{
            i++;
        }
    }
    printf("The 1500st prime number is %d\n",arr[n]);
    return 0;
}

int prime(int n){

int i,flag=0;
    for(i=2;i<n;i++){
        if(n%i==0)
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
