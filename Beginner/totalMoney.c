#include <stdio.h>
int main(){
    int tenCoins,fiveCoins,twoCoins,oneCoins;
    float total_amount = 0;
    printf("\nEnter the number of Rs10 coins\n");
    scanf("%d",&tenCoins);
    printf("\nEnter the number of Rs5 coins\n");
    scanf("%d",&fiveCoins);
    printf("\nEnter the number of Rs2 coins\n");
    scanf("%d",&twoCoins);
    printf("\nEnter the number of Rs1 coins\n");
    scanf("%d",&oneCoins);
    total_amount=10*tenCoins+5*fiveCoins+2*twoCoins+1*oneCoins;
    printf("\nTotal amount in the piggy bank is %f\n",total_amount);
    return 0;
}
