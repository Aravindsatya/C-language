// Client side C program to demonstrate Socket programming 
#include "headers.h"

int main(int argc, char const *argv[])
{ 
    int sockfd = 0;

    struct sockaddr_in serv_addr; 
   
//    char *hello = NULL; 
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

   clientMenu(sockfd,buffer);    
    
/*    while(1) { 
	  puts("Enter the Message :");
	  if((hello = (char *)malloc(sizeof(char)*100)) == NULL) {
		  perror(hello);
		  exit(1);
	  } else {
		gets(hello);
 	  	send(sockfd , hello , strlen(hello) , 0 ); 
  	  	printf("Message sent\n");
	        free(hello);
	  }
  	  puts("Typing...");
	  recv(sockfd,buffer,SIZE,0); 
  	  printf("%s\n",buffer );
	  memset(buffer,'0',SIZE);

    } 
*/    return 0; 
}
