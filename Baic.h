#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>


#ifndef TERMINATED_H
#define TERMINATED_H
void handle_sigint(int sig)
{
	printf("Found Signal %d\n", sig);

	exit(sig);
}

void Terminated() {
	signal(SIGINT, handle_sigint);
	exit(0);
}

#endif
