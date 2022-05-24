/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:6
 * Question-3
 */
#include <stdio.h>

int main( void ) {
int num;

printf("Enter a positive integer:");
scanf("%d",&num);
float factorial=1;
if(num>0){
    for(int k=num;k>0;k--){
        factorial*=k;
    }
    }

printf("Factorial of %d is %f",num,factorial);
return 0;
}
/*
(a)Correct values till input is 7 false if>7
(b)Correct values till input is 12 false if>12
(c)Correct values till input is 12 false if>12
(d)Correct values till input is 20 false if>20
(e)Correct values till input is 34 false if>34
(f)Correct values till input is 170 false if>170
(g)No correct values
*/