// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below 200000.

#include<stdio.h>
int prime(int n);
int main(){
    long int i=2;
    int sum=0;
    printf("The sum of the primes below 200000 is\t");
    while(i<200000){
        if(prime(i)==1){
            sum=sum+i;
            printf("%ld+",i);
            i++;
        }
        else{
          i++;
        }
    }
    printf("=\t%d",sum);
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
