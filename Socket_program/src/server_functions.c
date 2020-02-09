#include "headers.h"

void chating_function(int new_socket,char buffer[SIZE]) {
    char *ptr = NULL;
    while(1) {
         puts("client is typing....");
	 recv(new_socket ,buffer,SIZE,0);
         printf("%s\n",buffer );
         if((ptr = (char *) malloc(sizeof(char) * SIZE)) == NULL) {
                 perror(ptr);
                 exit(0);
         } else {
                puts("Enter the Message");
                gets(ptr);
	//	fgets(ptr,SIZE,new_socket);
                send(new_socket , ptr , strlen(ptr)+1,0);
                printf("message sent\n");
         }
         free(ptr);
	 memset(buffer,'\0',SIZE);
   }
}

void rvereseArray(int new_socket,char buffer[]) {

        puts("Data received from client :");
        recv(new_socket ,buffer,SIZE,0);

        char* reversed = (char*) malloc(sizeof(char) * strlen(buffer) + 1);
        int j = 0;
        for (int i = strlen(buffer) - 1; i >= 0; i--, j++) {
                 reversed[j] = buffer[i];
        }
        reversed[j + 1] = '\0';
        send(new_socket , reversed, strlen(reversed)+1,0);
        puts("Message sent");
}

