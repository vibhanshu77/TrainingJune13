/*Write a program that catches the SIGINT signal (triggered by Ctrl+C) 
and prints a custom message. Ensure that the program does not terminate 
when SIGINT is received but continues running. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum)
{
	printf("Handler do its task \n");
}

int main()
{
	signal(SIGINT, handler);

	while(1)
	{
		printf("Waiting to SIGINT \n");
		pause();
	}
	
	printf("Exiting...\n");
	return 0;
}
