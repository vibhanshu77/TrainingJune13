#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void handler(int signum)
{
	printf("Alarm signal received %d \n\a", signum);
	sleep(3);
	exit(signum);
}

int main()
{
	signal(SIGALRM, handler);

	alarm(5);

	printf("Alarm set for 5 seconds. \n");
	
	while(1)
	{
		printf("Waiting for alarm. \n");
		sleep(1);
	}

	return 0;
}
