#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"

int main()
{
	int ret = -1, child_exit_status;
	char * arguments[3] ;
	char buffer[256];
//	arguments[0] = "ls";
//	arguments[1] = "-lrt";
//	arguments[2] = NULL;

	while(1)
	{
		//print username@shellname$ with colour
		//readCommanFromuser()
		//parse the command
		//if first arg is exit call exit(0), pwd call getcwd(), for cd call chdir()
		//check for pipes #later
		//else tokenise the command, put it in arguments
		//call execvp
		//wait for command
		//fill the comman in arguments
		
		char name[] = ANSI_COLOR_BLUE "\nmyShell$ ";
		write(1, name, sizeof(name));
		read(0,buffer,256);
		buffer[strlen(buffer)-1] = '\0';
   				
		strcpy(arguments[0],buffer);
	//	printf("%s\n",arguments[0]);
		if( fork()==0)
			 system(arguments[0]);
			//execvp(arguments[0], arguments);
		else
		{
			wait(&child_exit_status);
		}
	}
	return 0;
}
