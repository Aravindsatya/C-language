/*********************************************************************************************************
    Aravind Maddala    aravind.satya23@gmail.com      cell: 9959989615

PURPOSE:
	-This programs deals with the bitoperations that can be performed on the given data 

***************************************************************************************************/
#include<stdio.h>
//displays the menu of operations that are to be performed on data
void menu(void) {
		printf("MENU:\n1.check given data power of 2 or not \n2.swap two numbers using xor\n3.check whether given number is odd or not\n4.exit\n");
		printf("---------------------------------------------------------------\n");
}
//checkin if the given number is odd or even
void isEven(int data) {
	int d;
	d=(data>>0)&1;
	if(d==0) {
		printf("the entered data %d is even nuumber\n",data);
	} else {
		printf("the entered data %d is odd nuumber\n",data);
	}
}

//checking if the given number is power of 2 or not
void checkPower(int data) {

		int b=31,count=0,c;
	for(b=31;b>=0;b--)
	{
		c=(data>>b)&1;
		if(c==1) {
			count+=1;
		}
	}
	if(count==1) {
		printf("the number %d is power of 2 \n",data);
	} else {
		printf("the number %d is not  power of 2\n",data);
	}
}
//swap two integers using xor operation

void swap(int a,int b) {

	printf(" the value of a is before swapping %d \n",a);
	printf(" the value of b is before swapping %d\n",b);
	printf("----------------------------------------\n");
	a=a^b;
	b=a^b;
	a=a^b;
	printf(" the value of a is after swapping %d\n",a);
	printf(" the value of a is after swapping %d\n",b);
	printf("----------------------------------------\n");

}




int main()
{
	int data,a,b;
	int  choice;
	printf("enter data:\n");
	scanf("%d",&data);
	while(1)
	{
		menu();
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{

			case 1:checkPower(data);
				
				break;

			case 2:printf("enter the two integers that are to be swapped \n");
			       scanf("%d%d",&a,&b);
			       swap(a,b);
		
				break;

			case 3:isEven(data);
				
				break;

			case 4:return 0;
		}
	}
	return 0;
}
/**************************************OUTPUT****************************
 enter data:
56
MENU:
1.check given data power of 2 or not 
2.swap two numbers using xor
3.check whether given number is odd or not
4.exit
---------------------------------------------------------------
enter your choice:
1
the number 56 is not  power of 2
MENU:
1.check given data power of 2 or not 
2.swap two numbers using xor
3.check whether given number is odd or not
4.exit
---------------------------------------------------------------
enter your choice:
3
the entered data 56 is even nuumber
MENU:
1.check given data power of 2 or not 
2.swap two numbers using xor
3.check whether given number is odd or not
4.exit
---------------------------------------------------------------
enter your choice:
2
enter the two integers that are to be swapped 
45
67
 the value of a is before swapping 45 
 the value of b is before swapping 67
----------------------------------------
 the value of a is after swapping 67
 the value of a is after swapping 45
----------------------------------------
MENU:
1.check given data power of 2 or not 
2.swap two numbers using xor
3.check whether given number is odd or not
4.exit
---------------------------------------------------------------
enter your choice:
4
*********************************************************************************/				

