
#include "headers.h"
//fuction definition for read the data 

//global variables
char buffer[SIZE];
char buf[4] = {'b','y','e','\n'};

void * readData(void *arg) {

  while(1) {
	memset(buffer,'\0',SIZE);
        int * newSocket = (int*) arg;
        read(newSocket[0],buffer,SIZE);
        if(!(strcmp(buffer,buf)))
            exit(0);
	else
            write(newSocket[1],buffer,SIZE);
 }
        return NULL;
}

//defining write Data function
void * writeData(void *arg) {
  while(1) {
	memset(buffer,'\0',SIZE);
        int * newSocket = (int *) arg;
        read(newSocket[1],buffer,SIZE);
        write(newSocket[0],buffer,SIZE);
        printf("Message sent\n");
  }
        return NULL;
}

