/*
 *
 * This program is the implementation of setting, clearing and toggling a bit.
 */

#include<stdio.h>
#include<stdlib.h>

//function to display the data in the form of bits
void display(int data){
	int i;
	for(i=31;i>=0;i--){
		printf("%d",(data>>i)&1);
	}
	printf("\n");
}

//function to set a bit
void setaBit(int data,int bit){
	printf("Data before setting a bit\n");
	display(data);
	data=data|(1<<bit-1);
	printf("Data after setting %d bit\n",bit);
	display(data);
}

//function to clear a bit
void clearaBit(int data,int bit){
	printf("Data before clearing a bit\n");
	display(data);
	data=data&(~(1<<bit-1));
	printf("Data after clearing %d bit\n",bit);
	display(data);
}

//function to toggle a bit
void toggleaBit(int data,int bit){
	printf("Data before toggling a bit\n");
	display(data);
	data=data^(1<<bit-1);
	printf("Data after toggling %d bit\n",bit);
	display(data);
}

//driver program to run the above operations
int main() {
	int choice,data,bit;
	while(1){
	printf("\n*********MENU FOR BIT MANIPULATIONS*************\n1.set a bit\n2.clear a bit\n3.Toggle a bit\n4.EXIT\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("Enter the data\n");
		       scanf("%d",&data);
		       printf("Enter the bit\n");
		       scanf("%d",&bit);
		       setaBit(data,bit);
		       break;
		case 2:printf("Enter the data\n");
		       scanf("%d",&data);
		       printf("Enter the bit\n");
		       scanf("%d",&bit);
		       clearaBit(data,bit);
		       break;
		case 3:printf("Enter the data\n");
		       scanf("%d",&data);
		       printf("Enter the bit\n");
		       scanf("%d",&bit);
		       toggleaBit(data,bit);
		       break;
	        case 4:exit(0);
		default:printf("Invalid choice\n");
    		}
	}
	return 0;

}

/*********************************************OUTPUT*****************************************************
 
*********MENU FOR BIT MANIPULATIONS*************
1.set a bit
2.clear a bit
3.Toggle a bit
4.EXIT
Enter your choice
1
Enter the data
8
Enter the bit
2
Data before setting a bit
00000000000000000000000000001000
Data after setting 2 bit
00000000000000000000000000001010

*********MENU FOR BIT MANIPULATIONS*************
1.set a bit
2.clear a bit
3.Toggle a bit
4.EXIT
Enter your choice
2
Enter the data
8
Enter the bit
4
Data before clearing a bit
00000000000000000000000000001000
Data after clearing 4 bit
00000000000000000000000000000000

*********MENU FOR BIT MANIPULATIONS*************
1.set a bit
2.clear a bit
3.Toggle a bit
4.EXIT
Enter your choice
3
Enter the data
8
Enter the bit
4
Data before toggling a bit
00000000000000000000000000001000
Data after toggling 4 bit
00000000000000000000000000000000

*********MENU FOR BIT MANIPULATIONS*************
1.set a bit
2.clear a bit
3.Toggle a bit
4.EXIT
Enter your choice
4
***********************************************************************************************************************************/
