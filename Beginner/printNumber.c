//To print numbers from 1 to the intended number
//Learnt: Return terminates the function

#include<stdio.h>
void main(){
    int number,i;
    printf("Enter the number\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        printf("%d\n",i);
    }   
}