/* The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first n natural numbers and the square of the sum. */

#include<stdio.h>
int main(){
    int n,difference;
    long int sum,sum_ofSquare,sum_square;
    printf("Enter the value for n\n");
    scanf("%d",&n);
    sum_ofSquare = (n*(n+1)*(2*n+1))/6;
    sum = (n*(n+1))/2;
    sum_square= sum*sum;
    difference=sum_square-sum_ofSquare;
    printf("The difference between the sum of the squares of the first n=%d natural numbers and the square of the sum=%d\n",n,difference);
    return 0;
}