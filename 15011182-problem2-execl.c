#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
	pid_t pid;
	
	// execute fork()
	pid = fork();

	if(pid == -1) {
		perror("error");	
	}
	// child process for executing ls with execl
	else if(pid == 0) {
		execl("/bin/ls", "ls", "-l", (char *)0);
		perror("error");
	}
	// parent process
	else {	
		wait((int *)0);	// waiting for child process to be done
		printf("execl() function execution\n");	// printing string
	}

	exit(EXIT_SUCCESS);
}
