//To write fibonacci series using recursion!

#include<stdio.h>
int fibonacci(int);
int main(){
    int num,i,series;
    printf("\nEnter the number of terms : ");
    scanf("%d",&num);
    printf("\nFibonacci series\n");
    for(i=0;i<num;i++){
        series=fibonacci(i);
        printf("%d\t",series);
    }
    return 0;
}
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
}