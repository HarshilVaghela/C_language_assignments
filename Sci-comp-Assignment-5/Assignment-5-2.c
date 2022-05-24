/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:5
 * Question-2
 */
#include <stdio.h>

int main( void ) {
int num;
float ans=0;
printf("enter the number:");
scanf("%d",&num);
for(int i=0;i<=num;i++){float factorial=1;
if(i>0){
    for(int k=i;k>0;k--){
        factorial*=k;
    }
    }
    ans+=1/factorial;
}
printf("%f is the answer",ans);
return 0;
}