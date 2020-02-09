#include<stdio.h>

//converts uopercase to lower case
char convertUpperToLower(char ch) {
	if(ch>='A' && ch<='Z')
		ch|=' ';
	return ch;
}
//converts lower case to wpper case
char convertLowerToUpper(char ch) {
	if(ch>='a' && ch<='z')
		ch&='_';
	return ch;
}
int main() {
	char ch='N';
	printf("before conversion :%c\n",ch);
	ch=convertUpperToLower(ch);

	printf("after conversion to lowercase :%c\n",ch);
	ch=convertLowerToUpper(ch);
	printf("after conversion to uppercase :%c\n",ch);
	return 0;
}
/****************OUTPUT***************************************

before conversion :N
after conversion to lowercase :n
after conversion to uppercase :N
*************************************************************/
