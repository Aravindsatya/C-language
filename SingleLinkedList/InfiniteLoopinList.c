/*----------------------------------------------------------------------------------------------------------
  Aravind Maddala     dvsaravindd@gmail.com       cell:9959989615

PURPOSE:

this programe deals with creating an ifinite loop in the linked list when lengthnof list is greater than 3 and after that fix the loop so that it should display the conents in the list
-addatBeginning functio is only used for 1st element to enter the list after that we use only addatEnd function
-----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int length=0;
struct node {

	int data;
	struct node *next;
};
struct node *address=NULL;

void menu(void)
{
	printf("MENU:\n---------------\n1.Add Node at beginning\n2.Add Node at end\n3.display\n4.creating infinite loop\n5.break the infinite loop\n6.exit\n");
}

void addatBeginning(struct node **head) {

	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Error\n");
	printf("Enter your id:\n");
	scanf("%d",&newnode->data);
	newnode->next=*head;
	*head=newnode;
}

void addatEnd(struct node  *head) {

	struct node *temp=head;
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Error\n");
	printf("Enter your id:\n");
	scanf("%d",&newnode->data);
	while(temp->next)
		temp=temp->next;
	if(length==3) {
		address=temp;
	}
	temp->next=newnode;

}

void createLoop(struct node *head) {

	struct node *temp=head;
	while(temp->next)
		temp=temp->next;
	temp->next=address;
}
void breakLoop(struct node *head) {

	struct node *slow=head,*fast=head;

	for(slow ; slow->next!=NULL;slow=slow->next) {
		if(slow==fast && slow!=head ) {
			fast->next->next=NULL;
			break;
		}
		fast=fast->next->next;

	}	
}

void display(struct node *head) {

	if(head==NULL)
		printf("No list is there in database\n");
	else
	{

		printf("--------------------------------------Student  Details--------------------------------------------\n");
		while(head)
		{
			printf("Student id             :%d\n",head->data);
			head=head->next;
		}
		printf("--------------------------------------------------------------------------------------------------\n");
	}

}
int  main()
{
	struct node *head=NULL;
	int choice,flag=0;
	while(1)
	{
		menu();
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:if(length<1) {
				       addatBeginning(&head);
				       length++;
			       } else {
				       printf("list hasmore than 1 elements use only option 2 \n");
			       }
			       break;

			case 2: if(length>=1) {
					addatEnd(head);
					length++;
				} else {
					printf("list is empty use only option 1 \n");
				}	       
				break;	

			case 3:display(head);
			       break;

			case 4:if(length>3) {
				       flag++;
				       createLoop(head);
				       printf("loop is created between length 3 and  %d  of linked list \n",length);
			       } else {
				       printf("loop was not created because the length of linked is %d which is less than 3\n",length);
			       }
			       break;

			case 5:if(flag) {
				       breakLoop(head);
				       printf("created loop between 3 and %d is fixed and printing the display \n",length);
				       display(head);
			       } else {
				       printf("infinite loop was not creating use option 4 to create ");
			       }
			       break;

			case 6:return 0;
		}
	}


	return 0;
}
/*************output******************************

MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
3
--------------------------------------Student  Details--------------------------------------------
Student id             :1
Student id             :1
Student id             :2
Student id             :3
Student id             :4
Student id             :5
Student id             :6
--------------------------------------------------------------------------------------------------
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
1
list hasmore than 1 elements use only option 2 
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
2
Enter your id:
7
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
4
loop is created between length 3 and  8  of linked list 
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
5
created loop between 3 and 8 is fixed and printing the display 
--------------------------------------Student  Details--------------------------------------------
Student id             :1
Student id             :1
Student id             :2
Student id             :3
Student id             :4
Student id             :5
Student id             :6
Student id             :7
--------------------------------------------------------------------------------------------------
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
1
list hasmore than 1 elements use only option 2 
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
3
--------------------------------------Student  Details--------------------------------------------
Student id             :1
Student id             :1
Student id             :2
Student id             :3
Student id             :4
Student id             :5
Student id             :6
Student id             :7
--------------------------------------------------------------------------------------------------
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
2
Enter your id:
9
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
3
--------------------------------------Student  Details--------------------------------------------
Student id             :1
Student id             :1
Student id             :2
Student id             :3
Student id             :4
Student id             :5
Student id             :6
Student id             :7
Student id             :9
--------------------------------------------------------------------------------------------------
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
4
loop is created between length 3 and  9  of linked list 
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
5
created loop between 3 and 9 is fixed and printing the display 
--------------------------------------Student  Details--------------------------------------------
Student id             :1
Student id             :1
Student id             :2
Student id             :3
Student id             :4
Student id             :5
Student id             :6
Student id             :7
Student id             :9
--------------------------------------------------------------------------------------------------
MENU:
---------------
1.Add Node at beginning
2.Add Node at end
3.display
4.creating infinite loop
5.break the infinite loop
6.exit
6



 **************************************************/






