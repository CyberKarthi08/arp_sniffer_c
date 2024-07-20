#include <stdio.h>
#include <unistd.h>  // for POSIX system calls

int main() {
    char buffer[256];
    ssize_t bytes_read;

    // Example of a system call (read) to read input from stdin
    bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer));

    // Example of a system call (write) to write output to stdout
    write(STDOUT_FILENO, buffer, bytes_read);

    return 0;
}