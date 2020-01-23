#include<stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter the number:\n");
    scanf("%d",&number);
    sum = recursiveAdder(number);
}

int recusiveAdder(int number) {
    int sum = 0;
    if( number == 1 ) {
        sum += number;
    } else {
        sum += recursiveAdder(number - 1);
    }
    return sum;
}