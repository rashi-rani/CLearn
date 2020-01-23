#include<stdio.h>
int recursiveAdder(int number);
int main() {
    int number, sum = 0;
    printf("Enter the number:\n");
    scanf("%d",&number);
    sum = recursiveAdder(number);
    printf("The sum is %d",sum);
    return 0;
}

int recursiveAdder(int number) {
    
    if( number == 0 ) {
     return number;
    } else {
        return number+ recursiveAdder(number-1);
    }
    
}