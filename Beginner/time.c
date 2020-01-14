#include<stdio.h>
int main(){
    int sec,hour,min,remaining_sec,remaining_sec2;
    printf("Enter time in seconds: ");
    scanf("%d",&sec);
    hour= sec/3600;
    remaining_sec = sec%3600;
    min= remaining_sec/60;
    remaining_sec2= remaining_sec%60;
    printf("The time in HH:MM:SS FORMAT is %02d:%02d:%02d",hour,min,remaining_sec2);
    return 0;

}
