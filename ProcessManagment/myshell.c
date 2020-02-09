#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"

int main()
{
	int ret = -1, child_exit_status;
	char * arguments[3];
	arguments[0] = "cat";
	arguments[1] = "test.txt";
	arguments[2] = NULL;

	while(1)
	{
		//print username@shellname$ with colour
		//readCommanFromuser()
		//parse the command
		//if first arg is exit call exit(0), pwd call getcwd(), for cd call chdir()
		//check for pipes #later
		//else tokenise the command, put it in arguments
		//call execvp
		//
		//
		char cwd[1024];
		getcwd(cwd, sizeof(cwd));
		//printf(ANSI_COLOR_GREEN "%s", cwd);
		//wait for command
		//fill the comman in arguments
		char name[] = "myShell$";
		write(1, name, sizeof(name));
		cwd[strlen(cwd)] = '$';
		//write(1, cwd, strlen(cwd));
		sleep(3); //remove this	
		ret = fork();
		if(ret == 0)
			execvp(arguments[0], arguments);
		else
		{
			wait(&child_exit_status);
		}
	}
	return 0;
}
