// Exercise 3.12
#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main(){
    pid_t pid;
    pid = fork();

    if(pid == 0) { // child process
        execlp("/bin/ls", "ls", NULL);
        printf("LINE J\n"); // Be reached?: No
    }
    else { // parent process
        wait(NULL);
        printf("Child Complete\n");
    }

    return 0;
}
