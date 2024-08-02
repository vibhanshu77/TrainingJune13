#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

void report(const char *msg)
{
	perror(msg);
	exit(-1);
}

int main(int argc, char *argv[])
{
	int fd[2];
	char buf[1024];

	if(argc != 2)
	{
		perror("Argc not matched");
		exit(0);
	}
	if(pipe(fd) < 0)
	{
		report("Pipe");
	}
	
	pid_t pid = fork();

	if(pid < 0)
	{
		report("Pid");
	}

	if(pid == 0)
	{
		close(fd[1]);

		read(fd[0], buf, sizeof(buf)+1);
		printf("In Child : %s\n",buf);
		
		close(fd[0]);
	}
	else
	{
		close(fd[0]);

		write(fd[1], argv[1], strlen(argv[1])+1);
		printf("Written to child\n");
		wait(NULL);

		close(fd[1]);
	}
	return 0;	
}
