#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int length;
struct student 
{
	int id;
	struct student *next;
};
struct student * addatBeginning(struct student *);
struct student * addatEnd(struct student *);
struct student * addatMiddle(struct student *);
struct student * deleteatBeginning(struct student *);
struct student * deleteatPosition(struct student *,int);
struct student * deleteatEnd(struct student *);
void menu(void);
void display(struct student *);
struct student * updateData(struct student *,int );
void search(struct student *,int );
