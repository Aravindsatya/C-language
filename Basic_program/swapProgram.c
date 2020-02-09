#include <stdio.h>

int swap(int *a,int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
 	return 0;
}

int main(void) {

	int a=15,b=10;
	int *ptr1,*ptr2;
	ptr1 = &a;
	ptr2 =&b;
	printf("a=%d  b=%d\n",a,b);
	if(swap(ptr1,ptr2)!=0)
		printf("swap failed\n");
	printf("a=%d  b=%d\n",a,b);
	if(swap(&a,&b)!=0)
		printf("swap failed\n");
	printf("a=%d  b=%d\n",a,b);


	return 0;
}
	
