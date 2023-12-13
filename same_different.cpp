#include <iostream>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        std::cout << "Child process executing different code." << std::endl;
        // Replace this with the actual code you want the child to execute.
    } else if (child_pid > 0) {
        // Parent process
        std::cout << "Parent process executing same program with the same code." << std::endl;
    } else {
        // Fork failed
        perror("fork");
        return 1;
    }

    return 0;
}

