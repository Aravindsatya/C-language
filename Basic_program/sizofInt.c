#include <stdio.h>
void fun(int arr[]) {
	int length,arrlen,alen;
	length = sizeof(arr)/sizeof(arr[0]);
	arrlen = sizeof(arr);
	alen = sizeof(arr[0]);
	printf("len = %d\n",length);
	printf("arrlen = %d\n",arrlen);
	printf("len = %d\n",alen);
/*
 * In function the arr is taken as pointer
 * the size of arr is 8 bytes
 * arr->address
 */
}
int main(void) {

	int arr[5],length;
	fun(arr);
	length = sizeof(arr)/sizeof(arr[0]);
	printf("len = %d\n",length);
}
