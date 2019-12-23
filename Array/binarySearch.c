//Program to implement binary search

#include<stdio.h>
int main(){
    int arr[10],num,i,n,beg,end,mid;
    printf("\n Enter the number of elements in the array");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("\n Enter the number that has to be searched: ");
scanf("%d",&num);
beg=0;end=n-1;
while(beg<=end){
    mid = (beg+end)/2;
    if(arr[mid]==num){
        printf("\n %d is present in the array at postion %d",num,mid);
        break;
    }
        else if(arr[mid]>num)
        end=mid-1;
        else
        beg=mid+1;
    

}
if(beg>end){
    printf("\n %d does not exist in the array",num);
}
return 0;
}
