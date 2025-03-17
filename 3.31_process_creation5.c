// Exercise 3.2
#include <stdio.h>
#include <unistd.h>
#include <wait.h>

// How many processes are created?
// Answer: 2^3 = 8

int main() {
    fork(); // fork a child process
    fork(); // fork another child process
    fork(); // and fork another
    printf("Hello, fork()!\n");
    
    return 0;
}
