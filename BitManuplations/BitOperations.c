/*********************************************************************************************************
 ARAVIND MADDALA    aravind.satya23@gmail.com      cell: 9959989615

PURPOSE:
	-This programs deals with the bitopeerations that can be performed on the given data 

***************************************************************************************************/
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
void setBit(int d,int bit) {
	printf("the data before set bit is %d\n",d);
	printBinary(d);
	d=d|(1<<bit);
	printf("the data after set bit is %d\n",d);
	printBinary(d);

}
//clears the bit at the given position
void clearBit(int d,int bit) {
	printf("the data before clear bit is %d\n",d);
	printBinary(d);
	d=d&~(1<<bit);
	printf("the data after clear  bit is %d\n",d);
	printBinary(d);
}
//repace 0 with 1 or 1 with 0 at the given position
void toggleBit(int d,int bit) {
	printf("the data before toggle operation is %d\n",d);
	printBinary(d);
	d=d^(1<<bit);
	printf("the data after toggle operation  is %d\n",d);
	printBinary(d);

}
//display the count of no of set bits in the given data
void countSetBits(int d) {
	int b=31,count=0,c;
	for(b=31;b>=0;b--)
	{
		c=(d>>b)&1;
		if(c==1) {
			count+=1;
		}
	}
	printf("the number of set bits in the given data are %d \n",count);
}
//display the bit stauts at nth position
void checkBitStauts(int d,int bit) {

		int c;
		c=(d>>bit)&1;
		printf("the statuss  of bit at position %d in the given data is : %d\n",bit,c);
}	

void clearBitstoNthBit(int d,int bit ) {
	printf("the data before clearing bits  is %d\n",d);
	printBinary(d);
	for(bit;bit>=0;bit--)
	d=d&~(1<<bit);
	printf("the data after clearing  bits to nth poaition is %d\n",d);
	printBinary(d);
}
//displays the menu of operations that are to be performed on data
void menu(void) {
		printf("MENU:\n1.set the bit \n2.clear the bit \n3.toggle the bit\n4.print binary\n5.count setbits\n6.check status of nth bit\n7.clear the bits from nth position to lsb\n8.exit\n");
		printf("---------------------------------------------------------------\n");
}
int main()
{
	int data,position;
	int  choice;
	printf("enter data:\n");
	scanf("%d",&data);
	printf("enter bit position :\n");
	scanf("%d",&position);
	int temp;
	temp=data;
	while(1)
	{
		menu();
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				setBit(data,position);
				break;

			case 2:data=temp;
				clearBit(data,position);
				break;

			case 3:data=temp;
				toggleBit(data,position);
				break;

			case 4:data=temp;
				printBinary(data);
				break;

			case 5: data=temp;
				countSetBits(data);
				break;

			case 6:data=temp;
			       checkBitStauts(data,position);
			       break;

			case 7: data=temp;

				clearBitstoNthBit(data,position); 
				break;

			case 8: return 0;


		}
	}
	return 0;

}
/**********************************OUTPUT************************************

enter data:
8888
enter bit position :
6
MENU:
1.set the bit 
2.clear the bit 
3.toggle the bit
4.print binary
5.count setbits
6.check status of nth bit
7.clear the bits from nth position to lsb
8.exit
---------------------------------------------------------------
enter your choice:
1
the data before set bit is 8888
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 1 0 1 0 1 1 1 0 0 0 
------------------------------------------------------------------
the data after set bit is 8952
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 1 0 1 1 1 1 1 0 0 0 
------------------------------------------------------------------
MENU:
1.set the bit 
2.clear the bit 
3.toggle the bit
4.print binary
5.count setbits
6.check status of nth bit
7.clear the bits from nth position to lsb
8.exit
---------------------------------------------------------------
enter your choice:
5
the number of set bits in the given data are 6 
MENU:
1.set the bit 
2.clear the bit 
3.toggle the bit
4.print binary
5.count setbits
6.check status of nth bit
7.clear the bits from nth position to lsb
8.exit
---------------------------------------------------------------
enter your choice:
7
the data before clearing bits  is 8888
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 1 0 1 0 1 1 1 0 0 0 
------------------------------------------------------------------
the data after clearing  bits to nth poaition is 8832
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 1 0 1 0 0 0 0 0 0 0 
------------------------------------------------------------------
MENU:
1.set the bit 
2.clear the bit 
3.toggle the bit
4.print binary
5.count setbits
6.check status of nth bit
7.clear the bits from nth position to lsb
8.exit
---------------------------------------------------------------
enter your choice:
8
**************************************************************************/
