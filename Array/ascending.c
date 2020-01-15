//Redisplaying the array with elements being sorted in ascending order

#include<stdio.h>
int main(){
    int arr[10],num,i,j,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);
    printf("\nEnter the elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<num-1;i++){
         for(j=0;j<num-i-1;j++){
          if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
          }
        }
     printf("The array in ascending order is:\n");
     for(i=0;i<num;i++){
         printf("%d\t",arr[i]);
        }
     return 0;
}