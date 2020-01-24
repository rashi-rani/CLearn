/* The prime factors of 13195 are 5, 7, 13 and 2/* The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 2,78,95,572 ? */

#include<stdio.h>
int prime(int n);
int main(){
    long int n=27895572,i=2,prime_factor;
    while(i<=n){
        if(n%i==0){
            if(prime(i)==1){
                prime_factor=i;
                
                i++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
        
    }
    printf("The largest prime factor of the number is %ld\n",prime_factor);
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