#include <stdio.h>

int prime(int n);

int main()
{
  int i= 0;
  int count = 0;
  while (count<1000) {
    if (prime(i) == 1){
	printf("%d: %d\n", count+1, i);
	count++;
    }
    i++;
  }
  return 0;
}


int prime(int n){

int i,flag=0;
    for(i=2;i<n;i++){
        if(n%i==0)
        flag=flag+1;
        
    }
    if(flag==0){
        return 1;
    } else if(n==2){
        return 1;
    }
    else
    {
        return 0;
    }
    
}