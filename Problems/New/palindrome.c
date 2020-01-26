// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include<stdio.h>
int palindrome(int n);
int main(){
    long int i,j,arr[1000],k=0,product=1;
    long int l,largest;
    for(i=999;i>100;i--){
        for(j=999;j>100; ){
            product=i*j;
            if(palindrome(product)==1){
                arr[k]=product;
                k++;
                break;
            }
            else
            {
                j--;
            }
            
        }
    }
    largest=arr[0];
    for(l=1;l<j;l++){
        if(arr[l]>largest){
            largest=arr[l];
        }
    }
    printf("the largest palindrome made from the product of two 3-digit numbers is %ld\n",largest);
    //the largest palindrome made from the product of two 3-digit numbers is 906609
    return 0;
}
    
    
    
        
    


int palindrome(int n){
    int num,rev=0;
    num=n;
    while(num!=0){
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;

    }
    num=n;
    if(num==rev){
    return 1;
    }
    else
    {
        return 0;
    }
    
    
}

