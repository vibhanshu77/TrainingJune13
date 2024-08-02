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
	char buf[1024], tuf[1024];
	
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
		close(fd2[0]);

		
		read(fd1[0], tuf, strlen(tuf));	
		printf("Child Receives : %s\n", tuf);
		
		printf("Choice : ");
		scanf("%[^\n]s", &tuf);
		write(fd2[1], tuf, sizeof(tuf));
		
		close(fd1[0]);
		close(fd2[1]);
		exit(0);
	}
	else if(pid > 0)
	{
		close(fd1[0]);
		close(fd2[1]);
		void *choice;
			
		printf("String : ");
		scanf("%[^\n]s", buf);
		write(fd1[1], buf, strlen(buf)+1);
		
		read(fd2[0], buf, sizeof(buf));
		printf("Choice is : %s\n", buf);

		printf("Written...\n");
		
		sleep(2);
		wait(NULL);
		printf("Parent Exiting...\n");
		close(fd1[1]);
		exit(0);
	}
	return 0;	
}
