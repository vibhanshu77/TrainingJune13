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
	int fd1[2];
	char buf[1024];

	if(pipe(fd1) == -1)
	{
		report("Pipe1");
	}

	pid_t pid = fork();

	if(pid < 0)
	{
		report("Pid");
	}

	if(pid == 0)
	{
		close(fd1[1]);
		ssize_t bytes;
		FILE *dest = fopen("t3.txt", "w");
		bytes = read(fd1[0], buf, sizeof(buf)-1);
		buf[bytes] = '\0';
		fprintf(dest,"%s", buf);
	
		fclose(dest);
		close(fd1[0]);
		_exit(0);
	}
	else if(pid > 0)
	{
		close(fd1[0]);
		FILE *src = fopen("t1.txt", "r");
				
		fgets(buf, sizeof(buf), src);
	
		write(fd1[1], buf, strlen(buf)+1);
			
		fclose(src);
		wait(NULL);
		printf("Parent Exiting...\n");
		close(fd1[1]);
		exit(0);
	}
	return 0;	
}
