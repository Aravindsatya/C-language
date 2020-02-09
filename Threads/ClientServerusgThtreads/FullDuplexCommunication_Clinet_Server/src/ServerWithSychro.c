/*
 * 
 *  Server side C program to demonstrate Socket programming and full duplex chatting process.
 *
 *
 */
#include "headers.h"


int main(int argc, char const *argv[]) 
{ 
	int server_fd, new_socket; 
	struct sockaddr_in address; 
	int addrlen = sizeof(address);

	pthread_t thread1,thread2;
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

	if (listen(server_fd, 1) < 0) 
	{ 
		perror("listen"); 
		exit(EXIT_FAILURE); 
	} 

	int rc1,rc2;

	puts("Waiting for request"); 

	new_socket = accept(server_fd, (struct sockaddr *)&address,(socklen_t*)&addrlen); 

	if(new_socket < 0) { 
		perror("accept"); 
		exit(EXIT_FAILURE); 
	}
	printf("Connection is Esatablished\n");


		if( (rc1=pthread_create( &thread1, NULL, &readData,&new_socket)) ) {
			printf("Thread creation failed: %d\n", rc1);
			return 1;
		}
		if( (rc2=pthread_create( &thread2, NULL, &writeData,&new_socket)) ) {
			printf("Thread creation failed: %d\n", rc2);
			return 1;
		}

	

			pthread_join( thread1, NULL);
			pthread_join( thread2, NULL);
	return 0; 
} 

