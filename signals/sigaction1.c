#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

void handler(int signum)
{
	printf("Received SIGINT (ctrl + c). Signal Handler running and Exiting.... \n");
	_exit(0);
}

int main()
{
	struct sigaction sa;

	sa.sa_handler = handler;
	sa.sa_flags = 0;
	
	sigemptyset(&sa.sa_mask);

	if(sigaction(SIGINT, &sa, NULL) == -1)
	{
		perror("Sigaction");
		return 1;
	}

	printf("Running process (PID : %d).\nPress Ctrl + C to triger the handler. \n",getpid());

	while(1)
	{
		pause();
	}

	return 0;
}
