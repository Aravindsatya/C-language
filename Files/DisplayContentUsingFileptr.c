#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp = NULL;
	fp = fopen(__FILE__,"r");	
	//This give the file name which is we were given.
	//printf("%s\n",__FILE__);
	if(fp == NULL) {
		perror("fp");
		return -1;
	}
	printf("FILE OPENED SUCCESSFULLY\n");
	int ch;
	while((ch=fgetc(fp)) != -1) {
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
