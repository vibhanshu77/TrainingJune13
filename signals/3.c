/*
Write a program that ignores the SIGINT signal. Test the program 
to ensure that pressing Ctrl+C does not interrupt its execution.
(Hint use signal(SIGINT, SIG_IGN) to ignore SIGINT)

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum)
{
	signal(SIGINT, SIG_IGN);
	printf("\nHandler do its task for SIGINT\n");
	sleep(5);
	printf("\nExiting from SIGINT...\n");
	signal(SIGINT, handler);
}

int main()
{
	signal(SIGINT, handler);

	while(1)
	{
		printf("Waiting to SIGNAL : %d\n", getpid());
		sleep(3);
	}
	
	printf("Exiting...\n");
	return 0;
}
