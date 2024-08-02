#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void handler(int signum)
{
	int n = 5;
	while(n--)
	{
		printf("Alarm signal received %d \n\a", signum);
		sleep(3);
	}
	exit(1);
}

int main()
{
	signal(SIGALRM, handler);

	alarm(5);

	printf("Alarm set for 10 seconds. \n");
	
	while(1)
	{
		printf("Waiting for alarm. \n");
		sleep(1);
	}

	return 0;
}
