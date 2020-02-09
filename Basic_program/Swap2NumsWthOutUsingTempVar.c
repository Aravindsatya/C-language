/*
 *
 * Program is for swap two numbers without using the temparary variable.
 */
#include <stdio.h>

int main(void) {

	int num1,num2;
	printf("Enter 1st Number :");
	scanf("%d",&num1);
	printf("Enter 2st Number :");
	scanf("%d",&num2);
	/*
	 * First approach is by using the xor operation in the we are swap values bit wise.
	 */
	printf("Before Swap Number1 = %d  Number 2 = %d\n",num1,num2);
	num1 = num1 ^ num2 ;
	num2 = num1 ^ num2 ;
	num1 = num2 ^ num1 ;
	printf("After Swap Number1 = %d  Number 2 = %d\n",num1,num2);
	/*
	 * Second approach is to do by using Methametical operations.
	 */
	printf("Before Swap Number1 = %d  Number 2 = %d\n",num1,num2);
	num1 =  num1 * num2 / (num2 = num1);
	printf("After Swap Number1 = %d  Number 2 = %d\n",num1,num2);
	
	return 0;

	/*
	 * The aboue both cases are working fine but if the values are exceed the integer range  
	 * it will give fatal or unknown valuse.
	 */
}
