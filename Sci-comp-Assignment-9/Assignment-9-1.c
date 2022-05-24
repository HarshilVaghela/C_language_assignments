/**Name: Harshilkumar Vaghela
 * Student number:3116318
 * Assignment:9
 * Question-1
 */
#include <stdio.h>
void split_time(long total_sec,int *hr,int *min,int *sec){
    *hr=total_sec/3600;
    *min=(total_sec-*hr*3600)/60;
    *sec=(total_sec-*hr*3600-*min*60);
    
    }
int main( void ){

        
	    return 0;
	}

