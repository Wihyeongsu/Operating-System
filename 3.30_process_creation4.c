// Exercise 3.1
#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int value = 5;

int main() {
    pid_t pid;
    pid = fork();
    
    if (pid == 0) { // child process
        value += 15;
        return 0;
    }
    else if(pid > 0) { // parent process
      wait(NULL);
      printf("Parent: value = %d\n", value); // Output: Parent: value = 5
    }

    return 0;
}
