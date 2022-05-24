/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:2
 * Question-3
 */
#include <stdio.h>

int main( void ) {
    
    printf("Enter two fractions seperated by a plus sign: ");
    int num1, denom1, num2, denom2, result_num, result_denom;
    scanf("%d / %d + %d / %d",&num1,&denom1,&num2,&denom2);
    result_num=num1*denom2+num2*denom1;
    result_denom=denom1*denom2;
    printf("The sum is %d/%d",result_num,result_denom);
    return 0;
	}

