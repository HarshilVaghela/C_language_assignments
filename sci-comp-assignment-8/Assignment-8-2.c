/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:8
 * Question-2
 */
#include <stdio.h>
int polynomial(int j);
int main( void ) {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        int answer=polynomial(number);
        printf("The answer is %d",answer);
	    return 0;
	}
int polynomial(int j){
    int answer=((((3*j+2)*j-5)*j-1)*j+7)*j-6;
    return answer;
}