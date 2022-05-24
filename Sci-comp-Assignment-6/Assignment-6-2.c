/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:6
 * Question-2
 */
#include <stdio.h>
#include <math.h>

int main( void ) {
double x;
printf("Enter a positive number:");
scanf("%lf",&x);
double y=1;
double diff=1;
while(diff>=y*0.00001){
    double oldy=y;
    y=(y+x/y)/2;
    diff=fabs(oldy-y);    
}
printf("Square root: %f", y);
return 0;
}