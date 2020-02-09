#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp = NULL;
	fp= fopen("test3.txt","a+");

	if(fp == NULL) {
		printf("Failed to open a File\n");
		exit(1);
	}
	printf("OPEN SUCCESSFULLY\n");
	int ch;
	printf("SEEK_END= %d\n",fseek(fp,0,SEEK_SET));
	while((ch = fgetc(fp))!= EOF) {
		printf("%c",ch);
	}
	printf("\n");
	
/*	while(fscanf(fp,"%s",str1) != -1) {
		puts(str1);
	}
*/	fclose(fp);
	return 0;

}
