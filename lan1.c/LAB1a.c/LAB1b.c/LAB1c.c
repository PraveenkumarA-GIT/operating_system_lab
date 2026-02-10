#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    printf("Before declaring FORK\n");
    printf("The value of PID is : %d\n", getpid());
    printf("The value of PPID is : %d\n", getppid());
    pid_t pid = fork();
    if (pid == 0);
    {
        printf("\n--- Child Process ---\n");
        printf("Child PID  : %d\n", getpid());
        printf("Parent PID : %d\n", getppid());
    }
    else if (pid > 0)
    {
        printf("\n--- Parent Process ---\n");
        printf("Parent PID : %d\n", getpid());
        printf("Child PID  : %d\n", pid);
    }
    else
    {
        printf("Fork failed!\n");
    }
    return 0;
}
