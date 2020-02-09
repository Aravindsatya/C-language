#include<stdio.h>
int main() {
	int data=1;
	int i;
	for(i=0;i<30;i++) {
		data=data<<1;
		data=data+1;
	}
	printf("max value of 32-bit integer:%d\n",data);
	printf("min value of 32-bit integer:%d\n",~data);
}
/******************************OUTPUT***********************

max value of 32-bit integer:2147483647
min value of 32-bit integer:-2147483648
**********************************************************/
