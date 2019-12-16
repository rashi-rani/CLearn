//To read and display n numbers using an array

#include<stdio.h>
int main(){
    int i=0,n;
    int arr[20];
    printf("\n Enter the number of elements\n");
    scanf("%d",&n);
    printf("\n Enter the elements\n");
    for(i=0;i<n;i++){
        printf("\n Arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
   printf("\n The array elements are \n");
    for(i=0;i<n;i++){
       printf("Arr[%d]= %d\t",i,arr[i]);
    }
    return 0;
}