#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    
    if(pid == 0)
    {
        printf("\nChild : Hello from child!");
        printf("\nChild : Child pid : %d", getpid());
        printf("\nChild : Parent id : %d", getppid());
    }
    else if(pid > 0)
    {
        printf("\nParent : Hello from parent!");
        printf("\nParent : My pid : %d", getpid());
        printf("\nParent : Child id : %d", pid);
    }
    return EXIT_SUCCESS;
}
