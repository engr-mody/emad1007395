#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t id[5];
  // id[0]: Main process
  // id[1]: Process_1
  // id[1]: Process_2
  // id[1]: Process_1_1
  // id[1]: Process_2_1

  if( fork() ) {
    if( fork() ){
      id[0] = getpid();
      printf("Main process: PID = %d\n", id[0]);
      wait();
    }else {
      if( fork() ) {
	id[2] = getpid();
	printf("   process_2: PID = %d\tPPID = %d\n", id[2], getppid() );
	wait();
      }else {
	id[4] = getpid();
	printf(" process_2_1: PID = %d\tPPID = %d\n", id[4], getppid() );
	wait();
      }
    }
    wait();
  }else {
    if( fork() ) {
      id[1] = getpid();
      printf("   process_1: PID = %d\tPPID = %d\n", id[1], getppid() );
      wait();
    }else {
      id[3] = getpid();
      printf(" process_1_1: PID = %d\tPPID = %d\n", id[3], getppid() );
      wait();
    }
    wait();
  }
  wait();
  return 0;
}
