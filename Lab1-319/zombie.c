#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main() {

	pid_t pid;
	pid = fork();

	if(pid > 0) {
		sleep(20);
	} else if (pid == 0) {
		return 0;
	} else if (pid < 0) {
		return -1;
	}
}
