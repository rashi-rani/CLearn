#include<stdio.h>
int main(){
    char arr1[10]={'t','e','a'},arr2[10]={0,0,0,0,0};
    char i,j=0,temp=0;
    int n=3;
    printf("The given word is tea");
    for (i=n;i>=0;i--){
        while(j>=0){
            arr2[j]=arr1[i-1];

            j++;
            break;
        }
    }
         printf("\nThe reversed word is : ");
         for(j=0;j<n;j++){
          printf("%c",arr2[j]);
         }
         return 0;
    
    
}