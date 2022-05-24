/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment-7
 * Question-2
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main( void ) {
	
    int ch='a';
    printf("Enter first word: ");
    
    int integers[26]={0};int i=0;
    while(ch!='\n'&& isalpha(ch)){
           ch=tolower(getchar());
            integers[ch-'a']++;i++;
        }

        printf("Enter second word: ");
    int integers2[26]={0};int j=0;ch='a';
    while(ch!='\n'&& isalpha(ch)){
           ch=tolower(getchar());
            integers2[ch-'a']++;j++;
        }
        bool k=true;
        for(int i=0;i<26;i++){
           k=k&integers[i]==integers2[i]; 
           }

        if(k){
               printf("The words are anagrams");
               }
    else{
        printf("The words aren't anagrams");
        }
    
    return 0;
	}