/*
 Modify the previous program to handle both SIGINT and SIGTERM signals. 
 Print a different message for each signal and terminate the program 
 only when SIGTERM is received(use only one sighandler for both SIGINIT and SIGTERM).
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum)
{
	if(signum == SIGINT)
	{	
		printf("Handler do its task for SIGINT\n");
	}
	if(signum == SIGTERM)
	{
		printf("Handler do its task for SIGTERM\n");
		//kill(getpid(), SIGTERM);
		exit(signum);
	}
}

int main()
{
	signal(SIGINT, handler);
	signal(SIGTERM, handler);
	signal(SIGTSTP, handler);

	while(1)
	{
		printf("Waiting to SIGNAL : %d\n", getpid());
		pause();
	}
	
	printf("Exiting...\n");
	return 0;
}
