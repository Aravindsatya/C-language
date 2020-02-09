
// Server side C program to demonstrate Socket programming 
#include "headers.h"

int main(int argc, char const *argv[]) 
{ 
    int server_fd, new_socket; 
    struct sockaddr_in address; 
    int addrlen = sizeof(address);

    char buffer[SIZE] = {0}; 
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
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
                       (socklen_t*)&addrlen))<0) 
    { 
        perror("accept"); 
        exit(EXIT_FAILURE); 
    }
    puts("connection established");
    puts("Waiting for client request");
    read(new_socket,buffer,SIZE);
    printf("%s\n",buffer);
    char choice = buffer[0];
    printf("choice: %c\n",choice);
    send(new_socket,"Read Data",10,0);
    switch(choice) {
	    case 'a' : chating_function(new_socket,buffer+1);
		     break;
	    case 'b' : rvereseArray(new_socket,buffer+1);
		     break;
	    default : puts("No Operation performed at this Moment");
    }   
    
    return 0; 
} 

