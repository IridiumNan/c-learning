#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char output[30] = "hello syscall!\n";
    // 0 is the fd stdin
    // 1 is the fd stdout
    // 2 is the fd stderr
    write(1, output, strlen(output));

    char filePath[30] = "bin/test.txt";
    int fd;
    // open -> openat syscall
    // remember to set the permission
    fd = open(filePath, O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        write(1, "File error\n", 11);
        return 1;
    }

    printf("the fd: %d\n", fd);

    int n = write(fd, "hello world\n", 12);

    printf("%d bytes write into %s", n, filePath);

    close(fd);

    return 0;
}
