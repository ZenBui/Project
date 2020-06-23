#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	pid_t pid;
	int num_coconuts = 17;
       	pid = fork();
	/*
	 * _ Neu pid == 0, dang trong tien trinh con, thay doi gia tri num_coconuts = 42, thoat
	 * _ Hoac pid > 0, dang trong tien trinh cha, gia tri khong thay doi num_coconuts = 17, 
	 * 
	 * = Ket qua cuoi cung la 17 
	 */
	if(pid == 0) {
		num_coconuts = 42;
		exit(0);
	}
	else {
		wait(NULL); /*Cho den khi tien trinh con ket thuc */
	}

	printf("I see %d coconuts!\n", num_coconuts);
	exit(0);

}
