#include <stdio.h>

#define size 5
void arrFunc(int*);
int main(void) {


	int arr[size],i;
	for(i=0;i<size;i++) {
		arr[i]=i+1;
	}
	for(i=0;i<size;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}
		printf(" arr[%d] = %d\n",i,arr[0]);
	printf(" arr_0 %d\n", arr[0]);
	arrFunc(arr);
	printf(" arr_0 %d\n", arr[0]);
	for(i=0;i<size;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;

}
//int arrFunc(int *arr) {
void arrFunc(int arr[size]) {
	arr++;
	int i;	
	for(i=0;i<size;i++) {
		arr[i]= i+12;
	}
	for(i=0;i<size;i++) {
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	for(i=0;i<size;i++) {
		printf("address %p\n",arr++);
	}
//	return 0;
}
