#include"header.h"

struct student *deleteatBeginning(struct student *head)
{
	struct student *temp=NULL;
	if(head==0)
		printf("list is empty\n");
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		temp=NULL;
	}
	return head;
}

struct student *deleteatPosition(struct student *head,int position)
{

		if(position <=0 || position > length) {
			printf("cannot delete the at %d position in list which is not there \n",position);
			return head;
		} 
		else if(position==1) {
			struct student *temp=head;
			head=head->next;
			free(temp);
			temp=NULL;
			length=length-1;
		} else {

			int index=1;
			struct student *currentnode=head;
			struct student  *previousnode=head;
			while(index !=position) {
				previousnode=currentnode;
				currentnode=currentnode->next;
				index=index+1;
			}
			previousnode->next=currentnode->next;
			free(currentnode);
			currentnode=NULL;
			length--;
		}
	

return head;
}



struct student  *deleteatEnd(struct student *head) {
     
      if(head==NULL) {
         printf("list is empty");
         return head;
      }
      struct student *temp,*previous;
      for(temp=head;temp->next!=NULL; previous=temp,temp=temp->next);
      previous->next=temp->next;
      free(temp);
      temp=NULL;
      return head;
}

