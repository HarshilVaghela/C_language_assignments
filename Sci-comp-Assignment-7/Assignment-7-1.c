/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment-7
 * Question-1
 */
#include <stdio.h>

int main( void ) {
	char ch;
    
    printf("Enter a message to be encrypted: ");
    
    char String[80];int i=0;
    while(ch!='\n'){
           ch=getchar();
            
            String[i]=ch;i++;
        }
         printf("Enter shift amount(1-25): ");int n=0;
    scanf("%d",&n);
    printf("Encrypted message: ");
    for(int j=0;j<i;j++){ch=String[j];
        if(ch >= 'A' && ch <= 'Z'){
                ch=((ch-'A')+n)%26+'A';
            }
        if(ch >= 'a' && ch <= 'z'){
                ch=((ch-'a')+n)%26+'a';
            }
            printf("%c",ch); 
    }
   
    
    return 0;
	}