/*
 *
 *	This program is for creating a multiple pthreads and passing an argument through it.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

typedef struct funcArgs{
	int arg1;
	int arg2;
}args ;

void * myThreadFun(void * arg)
{
	args * newArg = (args *) arg;
	printf("Inside thread arg1 is %d and arg2 is %d\n", newArg->arg1, newArg->arg2);
	sleep(3);
	return NULL;

}

void * printFunc(void * n)
{
	printf("inside printFunc n is : %d\n", *(int *) n);
	return NULL;
}

int main()
{
	args * argument = (args *)malloc(sizeof(args));
	argument->arg1 = 5;
	argument->arg2 = 6;


	pthread_t thread_id, thread_id1, thread_id2;
	int n = 3;
	printf("Before Thread\n");
	pthread_create(&thread_id, NULL, printFunc, &n);
	pthread_create(&thread_id1, NULL, printFunc, &n);
	pthread_create(&thread_id2, NULL, myThreadFun, argument);
	pthread_join(thread_id, NULL);
	pthread_join(thread_id1, NULL);
	pthread_join(thread_id2, NULL);
	printf("After Thread\n");

	return 0;

}




