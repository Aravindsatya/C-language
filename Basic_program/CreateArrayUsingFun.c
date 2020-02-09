#include <stdio.h>
#include <stdlib.h>

int* getArray(int );
void print(int *,int);
int main(void) {
	
	int length = 5;
	int *array = getArray(length);
//	int i=0;
	print(array,length);
	return 0;
}

int * getArray(int len) {

	int *ptr;
        ptr = (int*) malloc(len * sizeof(int));
	if(ptr == NULL)
		printf("Memory allocation failed\n");
	else {
		int i=0;
		for(i=0;i<len;i++)
			ptr[i] = i+1;
	}
	return ptr;

}

void print(int *arr,int len) {
	int i;
	for(i=0;i<len;i++)
		printf("Array[%d] = %d\n",i,arr[i]);
}
