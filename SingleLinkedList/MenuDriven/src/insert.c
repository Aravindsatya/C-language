#include"header.h"

struct student *addatBeginning(struct student *head)
{
	struct student *node=NULL;
	node=calloc(1,sizeof(struct student));
	if(node==NULL)
		printf("Error\n");
	printf("Enter your id:\n");
	scanf("%d",&node->id);
	node->next=head;
	head=node;
	return head;
}

struct student *addatEnd(struct student *head)
{
	struct student *node=NULL,*temp=NULL;
        node=calloc(1,sizeof(struct student));
        if(node==NULL)
                printf("Error\n");

        printf("Enter your id:\n");
        scanf("%d",&node->id);
	if(head==0)
		head=node;
	else
	{
		temp=head;
		while(temp->next)
			temp=temp->next;
		temp->next=node;
	}
	return head;
}

struct student *addatMiddle(struct student *head)
{
	struct student *node=NULL,*fast=NULL,*slow=NULL;
        node=calloc(1,sizeof(struct student));
        if(node==NULL)
                printf("Memory not allocated\n");

        printf("Enter your rollno:\n");
        scanf("%d",&node->id);
	if(head == NULL) {
         printf("list is empty so directly adding the record to list\n");
       head = node;
        return head;
    }
   
    if((head)->next == NULL) {
       int choice=0;
         printf("only one record is lresent in the list. want to add at 1.first or 2.last?\nenter your choice:");
         if(choice==1) {
           node->next = head;
             head = node;
             return head;
         }
         else if(choice==2) {
           (head)->next=node;
           return head;
         }
         else {
         printf("invalid choice. exiting...");
         return head; 
    }
    }
    else if((head)->next->next==NULL) {
     node->next=head->next;
     (head)->next=node;
     return head;
     }

     for(fast=head,slow=head;fast->next!=NULL && fast->next->next!=NULL;fast=fast->next->next,slow=slow->next);
     node->next=slow->next;
     slow->next=node;
     return head;
}

