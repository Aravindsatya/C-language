#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 
  
// A normal C function that is executed as a thread  
// when its name is specified in pthread_create() 
typedef struct argStruct{
	int arg1;
	int arg2;
}a;
void *myThreadFun(void *vargp) 
{ 
    sleep(1); 
    printf("Printing GeeksQuiz from Thread \n"); 
    return NULL; 
}

void * printFunc(void *arg)
{
	struct argStruct * ar = (a *) arg;
	printf("I am in printFunc: %d %d\n", ar->arg1, ar->arg2);
	return NULL;
	
} 
 
   
int main() 
{ 
    struct argStruct * argument = (a *)malloc(sizeof(a));
    argument->arg1 = 3;
    argument->arg2 = 4;
    pthread_t thread_id; 
    printf("Before Thread\n"); 
    pthread_create(&thread_id, NULL, myThreadFun, NULL); 
    pthread_join(thread_id, NULL); 
    printf("After Thread\n"); 
    pthread_create(&thread_id, NULL, printFunc, (void *)argument);
    pthread_join(thread_id, NULL); 
    printf("After Thread\n"); 
    exit(0); 
}
