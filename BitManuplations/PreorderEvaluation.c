/**********************************************************************************************

ARAVIND MADDALA    dvsaravindd@gmail.com      cell:9959989615

PURPOSE :
	-These programe gives the result for fiven postpix expression

***********************************************************************************************/
#include<stdio.h>
#include<string.h>

int stack[20],n=20,top=-1;
//it pushes an eleement in to the stack
void push(int data)
{
	if(top>=n-1)
	{
		printf("\n\tSTACK is over flow");

	}
	else
	{

		top++;
		stack[top]=data;
	}
}
//it pops the top element from the stack
int pop()
{
	int data;
	if(top<=-1)
	{
		printf("\n\t Stack is under flow \n");
		return 0;
	}
	else
	{
		data= stack[top];
		top--;
	}
	return data;
}
int main()
{
	char str[20];
	int result=0,a=0,number;
	printf("enter the postfix expression\n");
	fgets(str,20,stdin);
	for(int i=0;i<strlen(str)-1;i++) {

		if(str[i]>=48 && str[i]<=57) {
			number=str[i]-48;
			push(number);
		} else if(str[i]=='(') {
			i++;
			number=0;
			while(str[i]!=')')
			{
				a=str[i]-48;
				number=number*10+a;
				i++;
			}
			push(number);
		} else {
			int second=pop();
			int first=pop();
			if(str[i]=='*') {

				result=first*second;
				push(result);
			}else if(str[i]=='/') {
				result=first/second;
				push(result);
			}else if(str[i]=='+') {
				result=first+second;
				push(result);
			}else if(str[i]=='-') {
				result=first-second;
				push(result);
			}
		}
	}
	printf("the result for the postorder expression is :%d\n",result);


	return 0;

}
/*******************OUTPUT********************************

  enter the postfix expression
23(15)5/*+62*-4-
the result for the postorder expression is :-5
*************************************************************/
