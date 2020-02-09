/*
 *
 *	This program is for creating a multiple threads and each thread is increasing the value of global variable.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
// count is a global var
int counter;

//thread lock var
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

//definition of a function
void * printFun(void * arg) {
    
    pthread_mutex_lock(&mutex1);
    int * i = (int *) arg;
    counter += 1;
    printf("\nValue of a counter  %d at thread-%d\n", counter,*i);
    sleep(3);
    pthread_mutex_unlock(&mutex1);
  
    return NULL;

}

int main(void) {

	pthread_t thread[3];
	int ret,i=0;
	while(i<3) {
		ret = pthread_create(&(thread[i]),NULL,&printFun,&i);
		if(ret != 0) {
			perror("pthread_create");
			exit(1);
		}
		pthread_join(thread[i],NULL);
		i++;
	}
    	
	//destroying the pthread 
	pthread_mutex_destroy(&mutex1);
	return 0;
}
