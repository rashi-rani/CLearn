#include<stdio.h>
int main(){
    int i,num,pos,n,arr[10];
    printf("\n Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the values");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the number to be inserted: ");
    scanf("%d",&num);
    printf("\n Enter the postion at which the number has to be added: ");
    scanf("%d",&pos);

    for(i=n-1;i>=pos;i--)
        arr[i+1]=arr[i];
        arr[pos]=num;
        n++;
        printf("\n The array after insertion of %d is: ",num);
    
    for(i=0;i<n;i++)
    printf("\t %d",arr[i]);
    
    return 0;
}