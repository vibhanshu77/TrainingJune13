#include<stdio.h>
#include<signal.h>
#include<errno.h>
#include<unistd.h>

void alternate_handler(int);

void signal_handler(int signum)
{
	printf("signal_handler for signal : %d invoked\n", signum);
	signal(SIGINT,alternate_handler);
}

void alternate_handler(int signum)
{
	printf("alternate_handler for signal : %d invoked\n", signum);
	signal(SIGINT,signal_handler);
}


int main()
{
	signal(SIGINT,signal_handler);
	while(1) 
	{
		sleep(1);
		printf("signal demo: while loop \n");
	}
	printf("can't print this \n");
}
