/*
 * Call by reference using double pointer. 
 *
 */
#include <stdio.h>

void add(int a,int b,int **ptr) {

	**ptr = a+b;
	printf("ADD ptr2=%p\n",ptr);
	printf("ADD &ptr2=%p\n",&ptr);
}
int main(void) {

	int a=5,b=10,
	int const *ptr1 = &c;
	int **ptr2;
	const int c=0;
//	ptr1 = &c;
	ptr2 = &ptr1;
	add(a,b,ptr2);
	printf("In Main ptr2=%p\n",ptr2);
	printf("In Main &ptr2=%p\n",&ptr2);
	printf("Value of C = %d\n",c);
	return 0;
}
