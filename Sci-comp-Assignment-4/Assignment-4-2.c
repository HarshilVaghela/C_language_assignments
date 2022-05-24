/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:4
 * Question-2
 */
#include <stdio.h>

int main( void ) {
    int number,first,second;
    printf("Enter a two digit number: ");
    scanf("%d", &number);
    printf("You entered the number");
    
        if(number==0){printf(" zero");}
        if(number==1){printf(" one");}
        if(number==2){printf(" two");}
        if(number==3){printf(" three");}
        if(number==4){printf(" four");}
        if(number==5){printf(" five");}
        if(number==6){printf(" six");}
        if(number==7){printf(" seven");}
        if(number==8){printf(" eight");}
        if(number==9){printf(" nine");}
        if(number==10){printf(" ten");}
        if(number==11){printf(" eleven");}
        if(number==12){printf(" twelve");}
        if(number==13){printf(" thirteen");}
        if(number==14){printf(" fourteen");}
        if(number==15){printf(" fifteen");}
        if(number==16){printf(" sixteen");}
        if(number==17){printf(" seventeen");}
        if(number==18){printf(" eighteen");}
        if(number==19){printf(" nineteen");}
        
    second=number%10;
    first=number/10;
if(number>=20){
    switch(first){
        case 2:printf(" twenty");break;
        case 3:printf(" thirty");break;
        case 4:printf(" fourty");break;
        case 5:printf(" fifty");break;
        case 6:printf(" sixty");break;
        case 7:printf(" seventy");break;
        case 8:printf(" eighty");break;
        case 9:printf(" ninety");break;
        default:printf(" invalid");break;
    }
    switch(second){case 0:printf("");break;
        case 1:printf("-one");break;
        case 2:printf("-two");break;
        case 3:printf("-three");break;
        case 4:printf("-four");break;
        case 5:printf("-five");break;
        case 6:printf("-six");break;
        case 7:printf("-seven");break;
        case 8:printf("-eight");break;
        case 9:printf("-nine");break;
        default:printf(" invalid");
    }

}
    
    return 0;
}