#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * CreateFile, Open in vim
 */

#ifndef OPENVIM_H
#define OPENVIM_H
void OpenVim() {
	char command1[50];
	char command2[50];
	printf("1. Tao file co ten abcd.txt\n");
	printf("2. Mo bang vim editor\n");

	strcpy(command1, "touch abcd.txt");
	strcpy(command2, "vi abcd.txt");

	system(command1);
	system(command2);

	printf("All done!\n");
}

#endif

