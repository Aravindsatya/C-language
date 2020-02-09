/*
 * This program count the Number of 1's presented in binary equalent of a given Number. 
 */
#include <stdio.h>

int main(void) {

	int data,val,i,count=0;
	printf("Enter the data :");
	scanf("%d",&data);
/*	for( i=31 ; i>=0 ; i-- ) {
		if(val = data >> i);
	}
*/
	if((data&1) != 1)
		printf("Number is even\n");
	else
		printf("Number is odd \n");


//	printf("Total Number of 1's in given data :%d\n",count);

	return 0;

}
