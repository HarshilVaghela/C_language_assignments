/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:5
 * Question-1
 */
#include <stdio.h>

int main( void ) {
     
int day,month,year,day2,month2,year2,day3,month3,year3;
printf("Enter a date (mm/dd/yy): ");
    scanf("%d / %d / %d",&month,&day,&year);

    while(day!=0&&month!=0&&year!=0){
     month3=month;
     day3=day;
     year3=year;
        
        printf("Enter a date (mm/dd/yy): ");
    scanf("%d / %d / %d",&month2,&day2,&year2);
      if(year>year2){
          month=month2;
          day=day2;
          year=year2;
      }
      else if(year==year2&&month>month2){
           month=month2;
           day=day2;
           year=year2;
      }
      else if(year==year2&&month==month2&&day>day2){
           month=month2;
           day=day2;
           year=year2;
      }
       }
       printf("%d/%d/%.2d is the earliest date",month3,day3,year3);
      return 0;
}