/* To print the following pattern 
    H
    HE
    HEL
    HELL
    HELLO
    HELLO
    HELL
    HEL
    HE
    H */

    #include<stdio.h>
    int main(){
        char str[]="HELLO";
        int i,p;
        for(i=0;i<5;i++){
            p=i+1;
            printf("\n %-5.*s",p,str);
        }
        printf("\n");
        for(i=4;i>=0;i--){
            p=i+1;
            printf("\n %-5.*s",p,str);
        }
        return 0;
    }

    


