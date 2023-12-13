#include <iostream>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        std::cout << "Child process" << std::endl;
    } else if (child_pid > 0) {
        // Parent process
        std::cout << "Parent process" << std::endl;
    } else {
        // Fork failed
        perror("fork");
        return 1;
    }

    return 0;
}
