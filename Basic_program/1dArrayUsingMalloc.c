#include <stdio.h>
#include <stdlib.h>

int func(int *);
int main(void) {

	int *ptr;// = NULL;
	func(ptr);
	printf("%p\n",ptr);
//	printf("%d",*ptr);

}
int func(int * ptr) {
	ptr = (int *)malloc(sizeof(int));
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	*ptr = 5;
	printf("%d\n",*ptr);
	return 0;
}
