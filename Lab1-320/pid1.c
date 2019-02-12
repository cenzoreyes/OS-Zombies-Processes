#include "pid1.h"
#include <pthread.h>
#include <stdio.h>

int allocate_map() {

	for(int i = 0; i < PID_MAX; i++) {
		pid_map[i] = 0;
	}
	return 1;

}

int allocate_pid() {
	
	for(int i = 0; i < PID_MAX; i++) {
		if(pid_map[i] == 0) {
			pid_map[i] = 1;
			return PID_MIN + i;
		}
	}
	return 1;
}

void release_pid(int pid) {
	
	pid_map[pid + PID_MIN] = 0;
}
