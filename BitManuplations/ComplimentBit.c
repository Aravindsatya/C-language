/*
 *
 * This program is for complement a particular bit in given data.
 */
#include<stdio.h>
//display the data in the binary format
void printBinary(int d) {
	int b=31,c;
	for(b=31;b>=0;b--)
	{
		c=(d>>b)&1;
		printf("%d ",c);
	}
	printf("\n");
	printf("------------------------------------------------------------------\n");

}
//set the bit at the given position
int setBit(int d,int bit) {
	d=d|(1<<bit);
	return d;

}
//clears the bit at the given position
void clearBit(int d,int bit) {
	d=d&~(1<<bit);
}
void compliment(int data) {

	int carry=1;
	int d;

	printf("the data before compliment  bit is %d\n",data);
	printBinary(data);
	for(int bit=31;bit>=0;bit++) 
		data=data^(1<<bit);
	printf("the data after 1's compliment  bit is %d\n",data);
	printBinary(data);
	for(int bit=0;bit<=31;bit--) {
		d=(data<<bit)&1;
		d+=carry;

		if(d==1) {
			int a=setBit(d,bit);
			data|=a;
			break;
		}
	}
	printf("the data after 2's compliment  bit is %d\n",data);
	printBinary(data);

		
		
		
}

int main() {

	int data;
	printf("enter data:\n");
	scanf("%d",&data);
	compliment(data);
	return 0;
}
