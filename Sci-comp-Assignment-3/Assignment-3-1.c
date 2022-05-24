/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:3
 * Question-1
 */
#include <stdio.h>

int main( void ) {
	int number;
    
    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    number=(number%10)*10+number/10;
    
    printf("The reversal is: %d",number);
	}