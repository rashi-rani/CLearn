#include<stdio.h>
int main(){
    int arr[10],num,i,place;
    float median;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);
    printf("\n Enter the elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    if(num%2==0){
        place=num/2;
        median= (arr[place-1]+arr[place])/2;
    }
    else{
        place=(num+1)/2;
        median=arr[place-1];
        }
        printf("The median of the series is %f",median);
        return 0;
}