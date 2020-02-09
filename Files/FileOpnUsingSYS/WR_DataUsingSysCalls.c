/*
 *
 * This program is for passing the data byte wise.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct employee {
	char a;
	char b;
}part_t;

int main(void) {
	
	int fd;
	part_t buffer;
	fd = write(1,&buffer,sizeof(part_t));
	if(fd <= 0) {
		perror("read");
		exit(0);
	}
	else {
		printf("file descriptor :%d\n",fd);
		printf("data :%c %c\n",buffer.a,buffer.b);
	}


	return 0;
}
