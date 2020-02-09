#include <headers.h>

int main(void) {


	while(1) {
	
	    int num1,num2,result =0;

	    printf("Enter the 1st Number :");
    	    scanf("%d",&num1);
	    printf("Enter the 2nd Number :");
    	    scanf("%d",&num2);
	    int choice;
	    printf("************BASIC CALCULATOR***********\n");
	    printf("1.ADDTION\n2.SUBTRACTION\n3.DIVISION\n4.MULTIPLICATION\n5.EXIT\n\n");
	    printf("Enter the choice :");
    	    scanf("%d",&choice);
	    switch(choice) {
		case 1:{ if(addTwoNum(num1,num2,&result) != 0) {
			       	printf("Addition Function failed\n");
				break;
			 }
			printf("Result of ADD :%d\n",result);
		       }
		       break;
		case 2:{ if(subTwoNum(num1,num2,&result) != 0) {
				printf("Subtraction Function failed\n");
				break;
			  }
			printf("Result of sub:%d\n",result);
		       }
			break;
		case 3:{ if(divTwoNum(num1,num2,&result) != 0) {
				printf("Divison Function failed\n");
				break;
		         }
			printf("Result of div :%d\n",result);
		       }
		       break;
		case 4:{ if(mulTwoNum(num1,num2,&result) != 0) {
				printf("Multiplication Function failed\n");
				break;
		         }
			printf("Result of mul :%d\n",result);
		       }
	               break;
		case 5: exit(0);
		default: printf("Invalid Choice\n");

            }	
	}
	return 0;

}
