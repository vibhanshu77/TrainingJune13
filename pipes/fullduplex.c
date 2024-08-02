#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#define SIZE 1024

int main()
{
	int fd1[2], fd2[2];
	char buf1[SIZE], buf2[SIZE];
	pid_t pid;

	if(pipe(fd1) == -1){
		perror("pipe1");
		exit(EXIT_FAILURE);
	}
	
	if(pipe(fd2) == -1){
                perror("pipe2");
                exit(EXIT_FAILURE);
        }
	
	pid = fork();
	if(pid < 0 )
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if(pid == 0)
	{
		close(fd1[1]);
		close(fd2[0]);

		read(fd1[0], buf1, SIZE);
		printf("Process B received : %s\n", buf1);

		write(fd2[1], "Hello from B!", 13);

		close(fd1[0]);
		close(fd2[1]);

		exit(EXIT_SUCCESS);
	}
	else
	{
		close(fd1[0]);
		close(fd2[1]);

		write(fd1[1], "Hello from A!", 13);

		read(fd2[0], buf2, SIZE);
		printf("Process A received : %s\n", buf2);

		close(fd1[1]);
		close(fd2[0]);

		wait(NULL);
		exit(EXIT_SUCCESS);
	}
	return 0;
}

