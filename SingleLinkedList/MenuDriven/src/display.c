#include"header.h"

void menu(void)
{
	printf("MENU:\n---------------\n1.Add Node at beginning\n2.Add Node at end\n3.Add  Node at middle\n4.Delete node at beginning\n5.Delete node at end\n6.Delete a node at respective position\n7.display all elements of list\n8.Search a node\n9.Update a node\n10.Quit\n---------------\n\nEnter your choice:\n");
}

void display(struct student *head)
{
	if(head==NULL)
		printf("No list is there in database\n");
	else
	{
		
			printf("--------------------------------------Student  Details--------------------------------------------\n");
		while(head)
		{
			printf("Student id             :%d\n",head->id);
			head=head->next;
		}
			printf("--------------------------------------------------------------------------------------------------\n");
	}
		
}

struct student * updateData(struct student *head,int position) {
                if(position<=0 || position > length) {
                        printf("cannot update the data at that position %d:\n",position);
                       return head;
                }
                int index;
              	 struct student *temp=head;
                for(index=1;index<position;index++) {
                        temp=temp->next;
                }
                printf("enter the id to be update name:\n");
                scanf("%d",&temp->id);
		return head;
              }


void search(struct student *head,int data)
{
	int flag=0;
	while(head!=NULL && head->id!=data )
	{
		head=head->next;
		flag++;
	}
	if(head==NULL) {

		printf("%d was not found in the list \n",data);
	}
	else {
	printf("---------------------------data found successfully--------------------------\n");
	printf("ROLLNO             :%d\n",head->id);
	}
}

