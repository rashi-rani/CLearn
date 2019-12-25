#include <stdio.h>
void main()
{
    int number, i, flag = 0;
    printf("Enter the number to check\n");
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0){
            flag = flag + 1;
        break;
        }
    }
        if (flag == 0)
            printf("The given number is a prime number\n");
        else
            printf("The given number is not a prime number\n");
    
}