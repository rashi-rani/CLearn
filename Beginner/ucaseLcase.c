//To convert characters of a string to upper case and lower case

#include<stdio.h>
int main(){
    char str[100],upper_str[100],lower_str[100];
    int num,i=0,j=0,k=0,l=0;
    printf("Press 1 for changing lower string to UPPER string and 2 for changing UPPER string to lower string\n");
    scanf("%d",&num);
    if (num!=1 && num!=0){
    printf("You entered the wrong number!\n");
    return 0;
    }
    else
    printf("\n Enter the string : ");
    scanf("%s",str);
    if(num=1){
        while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z')
        upper_str[j]=str[i]-32;
        else
        upper_str[j]=str[i];
        i++,j++;
        }
      upper_str[j]='\0';
      printf("\n The string converted into upper case is : ");
      puts(upper_str);
    }  
    else  {
        while(str[k]!='\0'){
        if(str[k]>='A' && str[k]<='Z')
        lower_str[l]=str[k]+32;
        else
        lower_str[l]=str[k];
        k++,l++;
        }
      lower_str[j]='\0';
      printf("\n The string converted into lower case is : ");
      puts(lower_str);
    }
    
    return 0;
}