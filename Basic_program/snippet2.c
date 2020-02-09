#include <stdio.h>

int main(void) {

/*	int arr[4] = {10,20,30,40};
	printf("arr = %p\n",arr);
	printf("arr[0] = %d\n",arr[0]);
	printf("arr = %p\n",&arr[0]);
	printf("arr[5] = %d\n",arr[5]);
	printf("arr[0] = %d\n",*(arr+0));
	*(arr+1) = 25;
	printf("arr[1] = %d\n",*(arr+1));
	int *ptr = arr;
	int i;
	for(i=0; i<4 ;i++) {
		printf("ptr[%d] = %d\n",i,*(ptr+i));
	}
	int **ptr1 = &ptr;
	for(i=0; i<4 ;i++) {
		printf("ptr1[%d] = %d\n",i,*(*(ptr1)+i));
	}
	
	int **ptr2;

	printf("ptr2 = %p\n",ptr2);
*/
	int *ptr;
	*ptr=5;
	printf("ptr = %d\n",*ptr);
	return 0;
}
