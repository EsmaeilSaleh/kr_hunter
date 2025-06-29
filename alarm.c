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


