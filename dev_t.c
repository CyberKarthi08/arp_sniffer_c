#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Example: Open a file and get its device number
    const char *filename = "demo.c";
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    struct stat statbuf;
    if (fstat(fd, &statbuf) == -1) {
        perror("fstat");
        close(fd);
        return 1;
    }
    
    dev_t device = statbuf.st_dev;
    printf("Device number: %lu\n", device);
    printf("Major number: %d\n", major(device));
    printf("Minor number: %d\n", minor(device));

    // Create a dev_t from major and minor numbers
    int major_num = 8;
    int minor_num = 0;
    dev_t new_device = makedev(major_num, minor_num);
    printf("New device number from major %d and minor %d: %lu\n", major_num, minor_num, new_device);

    close(fd);
    return 0;
}
