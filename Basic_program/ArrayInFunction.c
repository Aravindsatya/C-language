#include <stdio.h>
#include <stdlib.h>

int getArray(int**,int);
void print(int *,int);
int main(void) {
	
	int length = 5;
	int *array = NULL;
	if(getArray(&array,length) !=0)
		printf("Failed\n");
	print(array,length);
	return 0;
}

int  getArray(int **ptr,int len) {

        *ptr = (int*) malloc(len * sizeof(int));
	if(*ptr == NULL)
		printf("Memory allocation failed\n");
	else {
		int *temp = *ptr;
		int i=0;
		for(i=0;i<len;i++)
			temp[i] = i+1;
			temp++;
	}
	return 0;

}

void print(int *arr,int len) {
	int i;
	for(i=0;i<len;i++)
		printf("Array[%d] = %d\n",i,arr[i]);
}
