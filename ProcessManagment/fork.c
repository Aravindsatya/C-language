
// Fork sys call
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
	
	printf("Hello Aravind\n");
	fork();
	printf("Hello Aravind\n");

	return 0;
}
