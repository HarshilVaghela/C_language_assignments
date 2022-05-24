/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:9
 * Question-3
 */
#include <stdio.h>
void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones){
    *twenties=dollars/20;
    *tens=(dollars-*twenties*20)/10;
    *fives=(dollars-*twenties*20-*tens*10)/5;
    *ones=(dollars-*twenties*20-*tens*10-*fives*5);
    }
int main( void ){

        
	    return 0;
	}

