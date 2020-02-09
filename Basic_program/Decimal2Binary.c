/*
 *
 * This program is for change the given decimal value into binary format.
 */

#include <stdio.h>

int main(void) {
	
	int data,val,i;
	printf("Enter the data :");
	scanf("%d",&data);
	for( i=31 ; i>=0 ; i-- ) {
		val = data >> i ;
		if( val & 1) 
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}
