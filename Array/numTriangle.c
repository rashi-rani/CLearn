//To print number triangle using array!!!!!

#include<stdio.h>
int main(){
    int i,j;
    int arr[1][5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<=i;j++){
            printf("%d",arr[0][j]);
        
        }

    }
}