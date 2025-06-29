
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>


#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("PID: %d\n", getpid());
	printf("PPID: %d\n", getppid());
	return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid = fork();
	if (pid < 0)
	{
		perror("fork")
		return 1;
	}
	if (pid == 0)
	{
		printf("Child process\n");
	}
	else
	{
		wait(NULL);
		printf("Parent process\n");
	}
	return (0);
}
