/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:4
 * Question-3
 */
#include <stdio.h>

int main( void ) {
    float largest=0.0f;
    float input;
    do{printf("Enter a number: ");
    scanf("%f",&input);
    if(input>largest){
        largest=input;
    }
    }
    while(input>0);
    printf("The largest number entered was %.2f", largest);
    return 0;
}