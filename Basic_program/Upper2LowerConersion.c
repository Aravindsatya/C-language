/*
 *
 * This program is for converting the Alphabit from upper to lower and lower to upper.
 */
#include <stdio.h>

int main(void) {
	char ch;
	printf("Enter the Charecter:");
	scanf("%c",&ch);
	if((ch >= 'a') && (ch <= 'z'))
		printf("Upper case Charecter is : %c\n",ch & '_');
	else if ((ch >='A' ) && (ch <= 'Z'))
		printf("Lower case Charecter is : %c\n",ch | 32);
	else 
		printf("Given charecter is special case\n");
	return 0;
}
