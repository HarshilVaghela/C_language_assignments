/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:2
 * Question-2
 */
#include <stdio.h>

int main( void ) {
	int number;
    float price;
    int day,month,year;
    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter price: ");
    scanf("%f",&price);

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d / %d / %d",&month,&day,&year);
    printf("Item\tUnit\t\tPurchase\n \tPrice\t\tdate\n");
    printf("%d\t$  %.2f\t%.2d/%.2d/%d",number,price,month,day,year);
	}