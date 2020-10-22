#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(void) {
	int pid, status;

	// execute fork(), if it is not working print error
	if((pid = fork()) < 0)
		perror("error");

	// child process for printing its pid and parent's pid
	else if (pid == 0) {
		printf("Child PID is %d, Parent PID is %d.\n", getpid(), getppid());
		exit(2);
	}
	
	// parent process 
	else {
		// parent process is waiting for child process to be done
		if (wait(&status) != pid)
			perror("error");

		// printing parent's pid
		printf("Parent PID is %d", getpid());
	}

	exit(EXIT_SUCCESS);
}
