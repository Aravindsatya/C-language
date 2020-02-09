// Client side C/C++ program to demonstrate Socket programming 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
#include <netinet/in.h> 
#include <string.h>
#include <unistd.h>
#define SIZE 256
   
int main(int argc, char const *argv[])
{ 
    int sockfd = 0;

    struct sockaddr_in serv_addr; 
   
    char *ptr = NULL; 
    char buffer[SIZE] = {0}; 
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
    while(1) { 
	  puts("Enter the Message :");
	  if((ptr = (char *)malloc(sizeof(char)*100)) == NULL) {
		  perror(ptr);
		  exit(1);
	  } else {
		fgets(ptr,SIZE,stdin);
 	  	send(sockfd,ptr,strlen(ptr) , 0 ); 
  	  	printf("Message sent\n");
	        free(ptr);
	  }
	  recv(sockfd,buffer,SIZE,0); 
  	  printf("%s\n",buffer );
	  memset(buffer,'0',SIZE);

    } 
    return 0; 
}
