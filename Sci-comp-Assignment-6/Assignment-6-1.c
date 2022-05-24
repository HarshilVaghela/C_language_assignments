/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment-6
 * Question-1
 */
#include <stdio.h>

int main( void ) {
	char ch=0;
    int len=0;
    printf("Enter a message: ");ch=getchar();
    while(ch!='\n'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            len++;
        }
        ch=getchar();
    } 
    printf("Your sentence had %d vowels",len);
    
    return 0;
	}