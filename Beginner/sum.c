//To write a program to calculate the sum of numbers from m to n 

#include<stdio.h>
void main(){
    int m,n,i,temp=0,sum=0;
    printf("Enter the value for m and n\n");
    scanf("%d%d",&m,&n);
    if(m>n){
      temp=n;
      n=m;
      m=temp;   
    }
    for(i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of numbers from %d to %d is %d\n",m,n,sum);
}