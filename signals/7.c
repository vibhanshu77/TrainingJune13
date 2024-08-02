/*
Write a program that sets a signal handler for SIGINT using sigaction. 
Use the sa_mask field to block SIGTERM while the SIGINT handler is 
executing. Demonstrate the behavior by sending both signals to the program.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

struct sigaction sa, sb;

void handler(int signum)
{
	printf("\nHandler do its task for SIGINT :%d PID: %d\n", signum, getpid());
}

void another_handler(int signum)
{
	printf("\nAnother handler do its task for SIGTERM\n");
	exit(signum);
}

void quitfunc(int signum)
{
	printf("In the SIGTSTP Function\n Unblocking");
	sigprocmask(SIG_UNBLOCK, &sa.sa_mask, NULL);
}

int main()
{
	sa.sa_handler = handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGINT, &sa, NULL);

	sb.sa_handler = another_handler;
	sb.sa_flags = 0;
	sigemptyset(&sb.sa_mask);
	sigaction(SIGTERM, &sb, NULL);

	sigaddset(&sa.sa_mask, SIGTERM);
	
	signal(SIGTSTP, quitfunc);

	printf("Blocking %d\n",getpid());

	sigprocmask(SIG_BLOCK, &sa.sa_mask, NULL);

	//sleep(10);

	//sigprocmask(SIG_UNBLOCK, &sa.sa_mask, NULL);

	//printf("Unblocking\n");
	//signal(SIGINT, handler);

	while(1)
	{
		printf("Waiting to SIGINT %d\n", getpid());
		sleep(5);
	}
	
	printf("Exiting...\n");
	return 0;
}
