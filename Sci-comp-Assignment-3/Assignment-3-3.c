/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:3
 * Question-3
 */
#include <stdio.h>

int main( void ) {
    int day,month,year;
    int day2,month2,year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d / %d / %d",&month,&day,&year);
    printf("Enter Second date (mm/dd/yy): ");
    scanf("%d / %d / %d",&month2,&day2,&year2);
    int checker=-2;
    if(year>year2){
        checker=1;
    }
    else if(year==year2){
        if(month>month2){
            checker=1;
        }
        else if(month==month2){
            if(day>day2){
                checker=1;
            }
            else if(day<day2){
                checker=-1;
            }
            else if(day==day2){
                checker=0;
            }
            else{
                checker=-2;
                }
        }
        else{
            checker=-1;
        }   
    }
    else {
        checker=-1;
    }
    switch(checker){case 0:printf("Both dates are equal");break;
        case 1:printf("%d/%d/%.2d is earlier than %d/%d/%.2d",month2,day2,year2,month,day,year);break;
        case -1:printf("%d/%d/%.2d is earlier than %d/%d/%.2d",month,day,year,month2,day2,year2);break;
        default: printf("Nothing");break;
    }
    
	}