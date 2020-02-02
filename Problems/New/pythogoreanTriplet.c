/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc such that a + b + c = n. */

#include<stdio.h>
int main(){
    int a,b,c,sum=0,product=1;
    for(a=1;a<1000;a++){
        for(b=2;b<1000;b++){
            for(c=3;c<1000;c++){
                if(a*a+b*b==c*c){
                    sum= a+b+c;
                    if (sum==1000){
                        printf("The required numbers are %d,%d and %d\n",a,b,c);
                        product=a*b*c;
                        printf("The product of abc such that a+b+c=1000 is %d\n",product);

                    }


                }
            }
        }

    }

}

/*Answer : a=200
           b=375
           c=425
           Product=31875000 */