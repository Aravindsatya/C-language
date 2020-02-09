/*
 *
 * This program is for open file by using system call functions and do the some operations on it.
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
	
	// file descreptor
	int fd,retVal;
	char buffer[50];
	//opening a file
	if((fd = open("a.txt",O_RDWR | O_CREAT,0766)) <= 0) {
		perror("fd");
		exit(1);
	}
	else {  
		printf("File desruptor :%d\n",fd); 
		while(1) {
			retVal = read(fd,buffer,sizeof(buffer));
		//	printf("%s",buffer);
			if (retVal <= 0)
				break;
			write(1,buffer,retVal);
			
		}
	}
	close(fd);

	return 0;
}	
