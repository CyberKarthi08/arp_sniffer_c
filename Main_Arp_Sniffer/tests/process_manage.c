#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        execl("/bin/ls", "ls", "-l",NULL);
    } else {
        // Parent process
        wait(NULL);  // Wait for child to complete
        printf("\n[+]Child process completed.\n");
    }

    return 0;
}
