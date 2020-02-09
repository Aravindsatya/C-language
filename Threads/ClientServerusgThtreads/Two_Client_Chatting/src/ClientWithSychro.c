
#include "headers.h"

int main(int argc, char const *argv[])
{ 
	int sockfd = 0;
        pthread_t thread1,thread2;

	struct sockaddr_in serv_addr; 

	//checking the command line arguments
	if(argc < 3) {
		puts("Invalid arguments you are provided");
		exit(1);
	}	
	
	//creating a sockfdet
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
	{ 
		printf("\n Socket creation error \n"); 
		return -1; 
	} 
	puts("Socket is Successfully created"); 
	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET; 
	serv_addr.sin_port = htons(atoi(argv[2])); 
	serv_addr.sin_addr.s_addr = inet_addr (argv[1]);       

	if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
	{ 
		printf("\nConnection Failed \n"); 
		return -1; 
	}
	puts("Connection Established");
	int rc1,rc2;

		if( (rc1=pthread_create( &thread1, NULL, &readData,&sockfd)) ) {
			printf("Thread creation failed: %d\n", rc1);
			return 1;
		}
		if( (rc2=pthread_create( &thread2, NULL, &writeData,&sockfd)) ) {
			printf("Thread creation failed: %d\n", rc2);
			return 1;
		}

		pthread_join(thread1,NULL);
		pthread_join(thread2,NULL);
			
		close(sockfd);
		return 0; 
}


