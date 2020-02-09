#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;
void print();
void addAtBegin(int **);
Node *head=NULL;

int main(void) {
	
	addAtBegin(&head);
	printf("%ld\n",*(&head+1)-head);
	printf("%ld\n",sizeof(head));
	print();
}

void addAtBegin(int **head) {

	Node *newNode = (Node *) malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Memory allocation faild\n");
		return;
	}
	printf("Enter the data :");
	scanf("%d",&newNode->data);
	if(head == NULL)
		*head=newNode;
		newNode->next = NULL;
}

void print() {
	Node *temp =head;
	while(temp) {
		printf("%d",temp->data);
		temp =temp->next;
	}

}
