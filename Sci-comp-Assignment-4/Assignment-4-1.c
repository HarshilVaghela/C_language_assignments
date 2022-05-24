/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:4
 * Question-1
 */
#include <stdio.h>

int main( void ) {
    int digit_1,digit_2,digit_3,digit_4;
    printf("Enter four digits: ");
    scanf("%d %d %d %d",&digit_1,&digit_2,&digit_3,&digit_4);
    int largest,smallest,largest2,smallest2;
    if(digit_2>digit_1){
        largest=digit_2;
        smallest=digit_1;
        }
    else{
        largest=digit_1;
        smallest=digit_2;
    }
    if(digit_3>digit_4){
        largest2=digit_3;
        smallest2=digit_4;
    }
    else{
        largest2=digit_4;
        smallest2=digit_3;
    }
    if(largest2>largest){
        largest=largest2;
    }
    if(smallest2<smallest){
        smallest=smallest2;
    }
    printf("Largest: %d\nSmallest: %d" ,largest,smallest);
    
    return 0;
}