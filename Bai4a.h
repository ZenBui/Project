#include <stdio.h>


#ifndef HELLO_H
#define HELLO_H
void hello() {
	char your_name[20];
	printf("Enter your name before get there: ");
	scanf("%[^\n]s", your_name);
	printf("Welcome %s\n", your_name);
	printf(" Welcome to IT007!\n");

}

#endif
