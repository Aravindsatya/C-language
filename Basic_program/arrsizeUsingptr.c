#include <stdio.h>
#include <stdlib.h>

void gerArr(int *arr,int size) {
	arr = (int *) malloc(sizeof(int)*size);
	printf("address in gerArr=%p\n",arr);
}

int main(void) {
	int *arr =NULL;
	int size =10;
	printf("address in main=%p\n",arr);
	gerArr(arr,size);
//	gerArr(&arr,size);
	printf("address in main=%p\n",arr);

	return 0;

}
/*
 * The aboue fuction in main the address of arr is null because of 
 * after completion of every fuction the stack will be collapsed.
 * to avoid this problem we have to pass the address of arr in main.
 */

