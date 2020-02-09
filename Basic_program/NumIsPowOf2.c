/*
 * This program we are checking the given Number is power of 2
 * 
 */
#include <stdio.h>

int main(void) {

	int data,val,i,count=0;
	printf("Enter the data :");
	scanf("%d",&data);
	for( i=31 ; i>=0 ; i-- ) {
		val = data >> i;
		if (val & 1)
			count++;
	}
	if(count == 1)
		printf("Given Number is power of 2\n");
	else
		printf("Not power of 2\n");
	return 0;

}
