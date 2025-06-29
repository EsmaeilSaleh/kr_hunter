
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

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("Running ls using exec...\n");
	execlp("ls", "ls", "-l", NULL);
	perror("exec failed");
	return (1);
}


void

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	handle_sigint(int sig)
{
	printf("Caught signal %d\n", sig);
}

int main(void)
{
	signal(SIGINT, handle_sigint);
	while (1)
	{
		printf("Running ... Press Ctrl+C to trigger SIGINT\n");
		sleep(2);
	}
	return (0);
}

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_alarm(int sig)
{
	printf("Alarm signal received: %d\n", sig);
}

int main(void)
{
	signal(SIGALARM, handle_alarm);
	alarm(3);
	printf("Waiting for alarm...\n");
	pause();
	return (0);
}
