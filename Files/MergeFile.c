#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp1=NULL,*fp2=NULL,*fp3=NULL;
	if((fp1=fopen("text1.txt","rw")) == NULL) {
		printf("Filed to open file\n");
		return -1;
	}
	else
		printf("File 1 Opened succesfully\n");

	if((fp2=fopen("text2.txt","rw")) == NULL) {
		printf("Filed to open file\n");
		return -1;
	}
	else
		printf("File 2 Opened succesfully\n");

	if((fp3=fopen("text3.txt","a+")) == NULL) {
		printf("Filed to open file\n");
		return -1;
	}
	else
		printf("File 3 Opened succesfully\n");
	
	int ch;
	while((ch = fgetc(fp1)) != -1) {
		fputc(ch,fp3);
	}
	while((ch = fgetc(fp2)) != -1) {
		fputc(ch,fp3);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	return 0;

}
