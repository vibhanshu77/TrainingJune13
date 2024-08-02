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
	int fd1[2], fd2[2];
	char buf[1024], str[1024];

	if(pipe(fd1) < 0)
	{
		report("Pipe1");
	}

	if(pipe(fd2) < 0)
	{
		report("Pipe2");
	}
	
	pid_t pid = fork();

	if(pid < 0)
	{
		report("Pid");
	}

	if(pid == 0)
	{
		close(fd1[1]);
		close(fd2[0]);


		read(fd1[0], buf, sizeof(buf));
		printf("In Child : %s\n",buf);

		write(fd2[1], "Hello from Child!", 18);
		
		close(fd1[0]);
		close(fd2[1]);
	}
	else
	{
		close(fd2[1]);
		close(fd1[0]);


		write(fd1[1],"Hello from Parent!", 19);
		
		read(fd2[0], buf, sizeof(buf));
		printf("In Parent : %s\n", buf);

		wait(NULL);

		close(fd1[1]);
		close(fd2[0]);
	}
	return 0;	
}
