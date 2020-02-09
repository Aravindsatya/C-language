#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp1=NULL,*fp2=NULL;
	int ch,len;
	if((fp1 = fopen("text3.txt","r")) == NULL) {
		perror("fp1");
		return -1;
	}
	else 
		printf("FILE -> 1 OPENED SUCCESSFULLY\n");
	if((fp2 = fopen("text4.txt","w")) == NULL) {
		perror("fp2");
		return -1;
	}
	else 
		printf("FILE -> 2 OPENED SUCCESSFULLY\n");
	while((ch = fgetc(fp1)) != EOF){
		printf("%c",ch);
	}
	fseek(fp1,-1,SEEK_END);
	len = ftell(fp1);
	printf("%d",len);
	while(len >= 0){
		ch = fgetc(fp1);
		fputc(ch,fp2);
		fseek(fp1,-2,SEEK_CUR);
		len--;
	}	
	printf("\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
