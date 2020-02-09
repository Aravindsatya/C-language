#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp = NULL,*fp1=NULL;
	fp= fopen("test.txt","a+");
	fp1= fopen("test.txt","w+");

	if(fp == NULL) {
		printf("Failed to open a File\n");
		exit(1);
	}
	printf("OPEN SUCCESSFULLY\n");
	char str[50],str1[50];
	puts("Enter str");
	gets(str);
	fprintf(fp,"%s",str);

	
/*	while(fscanf(fp,"%s",str1) != -1) {
		puts(str1);
	}
*/	fclose(fp);
	return 0;

}
