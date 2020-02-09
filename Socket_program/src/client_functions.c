#include "headers.h"

void clientMenu(int sockfd,char buffer[SIZE]) {
	char *ptr=NULL;
if((ptr = (char *)malloc(sizeof(char) * SIZE)) == NULL) {
                  perror(ptr);
                  exit(1);
} else {
	puts("Enter the KEY to perform operation");
	puts("'a'.Chatting\n'b'.Revers the string\n'c'.Exit");
	char choice;
	scanf("%c",&choice);
	ptr[0] = choice;
//	printf("ptr =%c\n",ptr[0]);
	getchar();
        send(sockfd , ptr , strlen(ptr) , 0 );
        recv(sockfd,buffer,SIZE,0);
//	printf("%s\n",buffer );
	while(1) {
          puts("Enter the Message :");
          gets((ptr));
          send(sockfd , ptr , strlen(ptr) , 0 );
          printf("Message sent\n");
        
	if(choice == 'a') {
          puts("Server is typing...");
          memset(buffer,'\0',SIZE);
          recv(sockfd,buffer,SIZE,0);
	  printf("%s\n",buffer );

    	}
	if(choice == 'b') {
		recv(sockfd,buffer,SIZE,0);
	  	printf("%s\n",buffer );
		break;
	}
      }
    }
	free(ptr);
}
