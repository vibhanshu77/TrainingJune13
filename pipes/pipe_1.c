#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define ReadEnd 0
#define WriteEnd 1

void report(const char *msg)
{
	perror(msg);
	exit(-1);
}

int main()
{
	int pipeFD[2];
	char buf;
	const char *msg = "This is my Home to shower love.\n";
	
	if(pipe(pipeFD) < 0)
	{
		report("Pipe FD");
	}

	pid_t pid = fork();

	if(pid < 0)
	{
		report("fork");
	}
	
	if(pid == 0)
	{
		close(pipeFD[WriteEnd]);

		while(read(pipeFD[ReadEnd], &buf, 1) > 0)
		{
			write(STDOUT_FILENO, &buf, sizeof(buf));
			usleep(100000);
		}

		close(pipeFD[ReadEnd]);
		_exit(0);
	}
	else
	{
		close(pipeFD[ReadEnd]);
		write(pipeFD[WriteEnd], msg, strlen(msg));
		close(pipeFD[WriteEnd]);
		wait(NULL);
		exit(0);
	}
	return 0;
}
