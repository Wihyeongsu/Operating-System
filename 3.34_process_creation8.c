// Exercise 3.13
#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main() {
    pid_t pid, pid1;
    pid = fork();
    
    if (pid == 0) { // child process
      pid1= getpid();
      printf("child: pid = %d\n", pid); // 0
      printf("child: pid1 = %d\n", pid1);
    }
    else if(pid > 0) { // parent process
      wait(NULL);
      pid1= getpid();
      printf("parent: pid = %d\n", pid);
      printf("parent: pid1 = %d\n", pid1);
    }

    return 0;
}
