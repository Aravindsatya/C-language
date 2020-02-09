#include <stdio.h>
#include <stdlib.h>

void gerArr(int **arr,int size) {
	*arr = (int *) malloc(sizeof(int)*size);
	int *temp = *arr;
	int i=0;
	for(i=0;i<size;i++) {
		scanf("%d",temp);
		(temp)++;
	}
}

int main(void) {
	int *arr =NULL;
	int size =5,i;
	printf("address in main=%p\n",arr);
	gerArr(&arr,size);
	printf("address in main=%p\n",arr);
	for(i=0;i<size;i++) {
		printf("%d",arr[i]);
	}

	return 0;

}
/*
 * passing an address of arr in main and collect it with double pointer
 * and try to change the value of arr in main by using indirect addressing method.
 */

