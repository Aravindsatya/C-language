#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
	int id;
	char name[20];
}emp;

int main(void) {

	FILE *fp=NULL;
	int ch;
	int cnt=5;
	emp *buf=(emp*)malloc(sizeof(emp)*cnt);
	if(buf == NULL) {
		puts("Failed to memory allocation");
		exit(0);
	}
	if((fp = fopen("csv.csv","a+")) == NULL) {
		printf("Failed to open file\n");
		exit(0);
	}
	else 
		printf("OPENED SUCCESSFULLY\n");
	while(cnt!=0) {
		puts("Enter id :");
		gets(buf->id);
		puts("Enter name :");
		gets(buf->name);
		fputs(buf,fp);
		cnt--;
	}
	fclose(fp);

	if((fp = fopen("csv.csv","r")) == NULL) {
		printf("Failed to open file\n");
		exit(0);
	}
	else 
		printf("OPENED SUCCESSFULLY\n");
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
