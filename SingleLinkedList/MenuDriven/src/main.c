#include"header.h"
int length=0;
int main()
{
	struct student *head=NULL;
	int choice,data,position;
	while(1)
	{
		menu();
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=addatBeginning(head);
				length++;
		       		break;

			case 2: head=addatEnd(head);
				length++;
		       		break;
		
			case 3:head=addatMiddle(head);
			       length++;
		       		break;

			case 4: head=deleteatBeginning(head);
				length--;
		       		break;
	
			case 5: head=deleteatEnd(head);
				length--;
		       		break;
						
			case 6:
				printf("enter the position to be update :\n");
			       	scanf("%d",&position);
				head=deleteatPosition(head,position);
		       		break;

			case 7: display(head);
		       		break;

			case 8: printf("Enter the id u want to search:\n");
				scanf("%d",&data);
				search(head,data);
				break;
			case 9:printf("enter the position to be update :\n");
			       scanf("%d",&position);
			       head=updateData(head,position);
			       break;
		
			case 10:return 0;
		}
	}
	return 0;
}

