#include <stdio.h>

void fun(int *ptr) {

	int a=0;
	a=*ptr;
	*ptr=10;
}
int main(void) {

/*	const int c =5;
	int *const ptr = &c;
	int a=10;
	ptr = &a;
*/

	int c=0;
	const int *ptr = &c;
	fun(ptr);
	printf("ptr=%d\n",*ptr);
	return 0;
}
