/*
 *
 * This program is for checking the system level fuctions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {

	char buffer[10];
	int fd;
	//reading the data into the buffer using stdin
	read(0,buffer,sizeof(buffer));
	
	//writing the data into the buffer using stdout
	write(1,buffer,sizeof(buffer));

	return 0;
}
