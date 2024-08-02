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

int main(int argc, int *argv[])
{
	pid_t pid = atoi(argv[1]);

	kill(pid, SIGUSR1);

	printf("Sender : Sent SIGUSR1 to pid : %d , %d\n",pid, getpid());
	
	printf("Exited...\n");
	return 0;
}
