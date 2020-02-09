/*
 * This program Finding the missing number in Array.
 * Ex: If the array is having the 0 to n indexes,the data in array stored in sorted order 
 * find the the nth bit in the array which is not in array.
 */

#include <stdio.h>
#define TOTAL 55
int main(void) {
	/*
	 * The below code is for when we are given the array values in sorted order
	 * the values should be 1 to 10.
	 */
	int arr[10] = {1,2,3,4,6,7,8,9,10};
	int i=0;
	while(i<10) {
		if((arr[i]+1) != (arr[i+1])) {
		      printf("Missing Number in Sorted Array :%d\n",arr[i]+1);
		      break;
		}
		i++;
	}
	/*
	 * The below code is for giver the elements if array in unsorted order
	 * the values should be 1 to 10.
	 */
	 int array[10]={10,9,5,8,7,6,2,3,4};
 	 int sum=0;
	 for(i=0;array[i];i++) {
		sum = sum + array[i];
	 }
	 if(TOTAL == sum) {
		 printf("There is no missing letter Here.\n");
	 }
	 else 
		 printf("Missing Number in unsorted Array :%d\n",TOTAL-sum);
			 
	return 0;
}
