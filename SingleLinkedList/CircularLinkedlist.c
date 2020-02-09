/*
 * In this This program we are creating a loop in the given linked list.
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;
/*
 *Fuction prototypes
 */
void createList(Node**);
void FindLoopInList();
void LoopInList();
void removeLoop(Node *); 
void FindLoopInList();
void displayList();

Node *head=NULL;
int length=1; 	//length is for finding the number of node in linked list

int main(void) {
	while(1) {
		int choice;
		printf("*************************\n");
		printf("1.AddaNode\n2.LoopInList\n3.FindLoopInList\n4.DisplayList\n5.exit\n");
		printf("*************************\n");
   		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:createList(&head);
		     	  	break;
			case 2:LoopInList();
			       	break;
			case 3:FindLoopInList();
				break;
			case 4:displayList();
			        break;
			case 5:exit(0);
			default:printf("Invalid choice\n");
		}
	}

}
/*
 *Fuction is for finding the loop in a liked list and remove the loop automatically.
 */
void FindLoopInList() {

	if(head == NULL) {
		perror("head");
		return;
	}
	else {
    		Node  *slow_p = head, *fast_p = head; 
 		int count=0; 
    		while (slow_p && fast_p && fast_p->next) { 
    			slow_p = slow_p->next; 
       			fast_p  = fast_p->next->next; 
  			count++;
        	   if (slow_p == fast_p) { 
			printf("loop found at the Index = %d\n",count++);
 	               removeLoop(slow_p); 
              	       return ; 
        	   }
     		}			
	   		printf("Loop is not found\n");
 
	}	 
			
}
/*
 *Function for create a loop in a given list at given position from the last node.
 */

void LoopInList() {
	
	if(head == NULL) {
		perror("head");
		return;
	}
	else {	int index;
		printf("Enter the index to create a Loop\n");
		scanf("%d",&index);
		if(index >= length) {
			printf("Index is Out of range\n");
			return;
		}
		else {	int count=0;
			Node *temp=head;
			Node *temp1=head;
			while(count != index) {
				temp= temp->next;
				count++;
			}
			while(temp1->next != NULL) {
				temp1= temp1->next;
			}
			if(temp1 -> next == NULL) {
			       temp1 -> next = 	temp;
			}
		}


	}
}

/*
 *Function for display the data in linked list.
 */
void displayList() {
	
	if(head == NULL) {
		perror("head");
		return;
	}
	else {
		Node *temp =head;
		while(temp->next != NULL) {
			printf("%d",temp->data);
			printf("--->");
			length++;
			temp = temp->next;
		}
			printf("%d\n",temp->data);
			printf("length = %d\n",length);
	}

}
/*
 *Function for create a liked list.
 */
void createList(Node **head) {

	Node *newNode = (Node *) malloc(sizeof(Node));
	if(newNode == NULL) {
		perror("newNode");
		return;
	}d
	printf("Enter the data :");
	scanf("%d",&newNode->data);
	
	if(*head == NULL) {
		*head = newNode;
       		newNode->next = NULL;
	}
	else {
		Node *temp;
		temp = *head;
		while(temp->next != NULL) {
			temp=temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
	}
	
}
/*
 * Fuction for remove a loop in linked list if any loop is found in list.
 */

void removeLoop(Node *loop_node) {
   
    Node *ptr1 = loop_node;
    Node *ptr2 = loop_node;

    // Count the number of nodes in loop
    unsigned int k = 1, i;
    while (ptr1->next != ptr2) {
        ptr1 = ptr1->next;
        k++;
    }

    // Fix one pointer to head
    ptr1 = head;

    // And the other pointer to k nodes after head
    ptr2 = head;
    for (i = 0; i < k; i++)
      ptr2 = ptr2->next;
    
    while (ptr2 != ptr1) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Get pointer to the last node
    ptr2 = ptr2->next;
    while (ptr2->next != ptr1)
       ptr2 = ptr2->next;
    ptr2->next = NULL;
}
