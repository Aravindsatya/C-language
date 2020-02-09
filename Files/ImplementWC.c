#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp=NULL;
	if((fp=fopen(__FILE__,"r")) == NULL) {
		printf("Filed to open file\n");
		return -1;
	}
	printf("FILE OPEND SUCCESSFULLY\n");
	int ch;
	int lcount=0,wcount=0,chcount=0;
	while((ch=fgetc(fp))!=-1) {
		if(ch == ' ')
			wcount++;
		else if(ch == '\n')
			lcount++;
		else
			chcount++;
	}
	fseek(fp,0,SEEK_END);
	printf("Total Number of words :%d\n",wcount);
	printf("Total Number of Lines :%d\n",lcount);
	printf("Total Number of charecters :%d\n",chcount);
	printf("The size of File : %ld\n",ftell(fp));
	fclose(fp);
	return 0;
}

