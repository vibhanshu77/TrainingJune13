/*
 Write two programs: one that sends a SIGUSR1 signal to another 
 process and one that handles the SIGUSR1 signal. Use the kill 
 function to send the signal and demonstrate communication between 
 the two programs.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum)
{
	printf("Handler do its task for SIGUSR1. \n");
	//exit(signum);
}

int main()
{
	signal(SIGUSR1, handler);

	while(1)
	{
		printf("Receiver : Waiting for SIGUSR1 PID : %d\n",getpid());
		sleep(5);
	}
	
	printf("Exiting...\n");
	return 0;
}
