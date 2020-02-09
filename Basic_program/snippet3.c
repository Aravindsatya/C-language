/*
 *  snippet for checking the pointer addresses
 *
 */
#include <stdio.h>

void add (int a,int b,int *ptr) {
	
	printf("In ADD ptr = %p\n",ptr);
	printf("In ADD &ptr = %p\n",&ptr);
	*ptr = a+b;
}
int main(void) {
	int a=5,b=10;
	const int c=0;
	int  const *ptr=&c;
//	ptr = &c;
	add(a,b,ptr);
	printf("In Main ptr = %p\n",ptr);
	printf("In Main &ptr = %p\n",&ptr);
	printf("C =%d\n ",c);
	return 0;
}
