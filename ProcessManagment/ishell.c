
#include <unistd.h>

int main(void) {
	
	//declaring array of pointer
	char * arguments[3] = {NULL};
	
	arguments[0] = "ls";
	arguments[1] = "-lrt";
	execvp(arguments[0],arguments);

	return 0;
}
