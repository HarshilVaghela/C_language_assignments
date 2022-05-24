/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment-8
 * Question-1
 */
#include <stdio.h>

int main( void ) {
	char ch;
    
    printf("Enter the sentence: ");
    
    char String[80];int i=0;char mark;
    while(ch!='\n'){
           ch=getchar();
            if(ch=='?'||ch=='.'||ch=='!'){mark=ch;break;}
            String[i]=ch;i++;
        }
        printf("Reverse: ");
         
    for(int j=i;j>=0;j--){ch=String[j-1];
       if(ch == ' ' ){
                for(int k=j;k<i;k++){
                    if(k==sizeof(String)||String[k]==' '){break;}
                    printf("%c",String[k]);
                }
                printf(" ");
            }     
    }
    for(int k=0;k<i;k++){
                    if(k==sizeof(String)||String[k]==' '){break;}
                    printf("%c",String[k]);}
    printf("%c",mark);
   
    
    return 0;
	}