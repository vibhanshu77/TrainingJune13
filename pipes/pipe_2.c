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

void handler(int signum)
{
	printf("Parent process received SIGCHLD signal\n");
}

void reverse(char *str)
{
	int n = strlen(str);
	for(int i = 0 ; i<n/2 ; i++)
	{
		char temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
}

int main(int argc, char *argv[])
{

	int pipeFD[2];
	char buf[1024];
	
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
		FILE *dest = fopen(argv[2], "w");
		if(!dest)
		{
			report("fopen");
		}

		ssize_t bytesRead;
		while((bytesRead = read(pipeFD[ReadEnd], buf, sizeof(buf)-1)) > 0)
		{
			buf[bytesRead] = '\0';
			reverse(buf);
			fwrite(buf, sizeof(buf), bytesRead, dest);
		}
		fclose(dest);

		close(pipeFD[ReadEnd]);

		kill(getppid(),SIGCHLD);
		_exit(0);
	}
	else
	{
		close(pipeFD[ReadEnd]);
		signal(SIGCHLD, handler);
		FILE *src = fopen(argv[1], "r");
		if(!src)
		{
			report("fopen");
		}
		while(fgets(buf, sizeof(buf), src)>0)
		{
			write(pipeFD[WriteEnd], buf, strlen(buf));
		}
		fclose(src);
		close(pipeFD[WriteEnd]);
		wait(NULL);
		printf("Parent process exiting.. ");
		exit(0);
	}
	return 0;
}
