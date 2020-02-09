#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int ret = -1, pid, exit_status_of_child;
	printf("Hello\n");
	ret = fork();
	if(ret == 0)
	{
		printf("inside child process\n");
		pid = getpid();
		printf("(child)child process id: %d\n", pid);
		printf("child going to sleep\n");
		sleep(2);
		printf("child woke up\n");
		printf("(child)child parent process id: %d\n", getppid());
		printf("child terminated\n");
	}
	else
	{
		//wait(&exit_status_of_child);
		
		printf("parent\n");
		printf("inside parent process\n");
		printf("(parent)child process id: %d\n", ret);
		printf("parent process id: %d\n", getpid());
		printf("parent going to sleep\n");
		printf("parent woke up\n");
		printf("parent terminated\n");
	}
	

	return 0;
}
