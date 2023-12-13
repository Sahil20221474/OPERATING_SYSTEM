#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        std::cout << "Child process executing its task." << std::endl;
        // Replace this with the actual code you want the child to execute.
    } else if (child_pid > 0) {
        // Parent process
        std::cout << "Parent process waiting for the child to finish." << std::endl;
        wait(NULL); // Parent waits for the child to finish
        std::cout << "Child process has finished, and parent continues." << std::endl;
    } else {
        // Fork failed
        perror("fork");
        return 1;
    }

    return 0;
}

