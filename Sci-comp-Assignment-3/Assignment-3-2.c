/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:3
 * Question-2
 */
#include <stdio.h>

int main( void ) {
	int number;
    
    printf("Enter a number:");
    scanf("%d",&number);
    int digit=0;
    if(number!=0){
    if(number<10){digit=1;}
        else if(number<100){digit=2;}
            else if(number<1000){digit=3;}
                else if (number<10000){digit=4;}
    }
    
    printf("The number %d has %d digits",number,digit);
	}