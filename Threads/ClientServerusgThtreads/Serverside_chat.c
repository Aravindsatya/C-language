/*
 * 
 *  Server side C program to demonstrate Socket programming and accept the 3 clients
 *
 *
 */



#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h>
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h>
#include <sys/wait.h>
#include <pthread.h>

#define SIZE 256

//initializing a thread
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
char buffer[SIZE] = {'\0'}; 
char *ptr = NULL;
//declarations of functions
void * readWriteData(void*);


int main(int argc, char const *argv[]) 
{ 
	int server_fd, new_socket; 
	struct sockaddr_in address; 
	int addrlen = sizeof(address);

	pthread_t thread1;
	//  char *ptr = NULL; 
	if(argc < 2) {
		printf("Invalid arguments");
		exit(1);
	}

	// Creating socket file descriptor 
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
	{ 
		perror("socket failed"); 
		exit(EXIT_FAILURE); 
	} 
	address.sin_family = AF_INET; 
	address.sin_addr.s_addr = inet_addr("0.0.0.0"); 
	address.sin_port = htons(atoi(argv[1])); 

	// Forcefully attaching socket to the port  
	if (bind(server_fd, (struct sockaddr *)&address,  
				sizeof(address))<0) 
	{ 
		perror("bind failed"); 
		exit(EXIT_FAILURE); 
	}

	if (listen(server_fd, 3) < 0) 
	{ 
		perror("listen"); 
		exit(EXIT_FAILURE); 
	} 

	int rc1;

	puts("Waiting for request"); 

	while((new_socket = accept(server_fd, (struct sockaddr *)&address,(socklen_t*)&addrlen))) {
		
		if(new_socket < 0) { 
			perror("accept"); 
			exit(EXIT_FAILURE); 
		}
		else
			printf("Connection is Esatablished\n");


		if( (rc1=pthread_create( &thread1, NULL, &readWriteData,&new_socket)) ) {
			printf("Thread creation failed: %d\n", rc1);
		}

	}

//		pthread_join( thread1, NULL);
	return 0; 
} 


//fuction definition for read and write the data 

void * readWriteData(void *arg) {

	pthread_mutex_lock( &mutex1 );
  while(1) {
	int * newSocket = (int *) arg;
	puts("Receving data:");
	recv(*newSocket ,buffer,SIZE,0); 
	write(1,buffer,SIZE);
	
	puts("\nEnter the Message :");
        if((ptr = (char *)malloc(sizeof(char)*SIZE)) == NULL) {
                  perror(ptr);
                  exit(1);
        } else {
                fgets(ptr,SIZE,stdin);
                send(*newSocket , ptr , strlen(ptr) , 0 ); 
                printf("Message sent\n");
                free(ptr);
        }
	
   }	
	pthread_mutex_unlock( &mutex1 );	
	return NULL;
}

