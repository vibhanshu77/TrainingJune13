/*
Write a program that blocks the SIGINT signal for a certain duration 
(e.g., 10 seconds) and then unblocks it. Use sigprocmask to achieve this. 
Demonstrate the behavior by sending SIGINT while the signal is 
blocked and after it is unblocked.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum)
{
	printf("\nHandler do its task for SIGINT %d\n", signum);
}

int main()
{
	struct sigaction sa;
	sa.sa_handler = handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGINT, &sa, NULL);

	sigset_t newact;
	sigemptyset(&newact);
	sigaddset(&newact, SIGINT);
	
	printf("Before Blocking. Now test Ctrl + C\n");

	if(sigprocmask(SIG_BLOCK, &newact, NULL)<0)
	{
		perror("Sigprocmask ");
		exit(EXIT_FAILURE);
	}
	sleep(10);

	if(sigprocmask(SIG_UNBLOCK, &newact, NULL)<0)
	{
                perror("Sigprocmask ");
                exit(EXIT_FAILURE);
        }

	printf("After Blocking. Now test Ctrl + C\n");
	while(1)
	{
		printf("Waiting to SIGNAL : %d\n", getpid());
		sleep(3);
	}
	
	printf("Exiting...\n");
	return 0;
}
