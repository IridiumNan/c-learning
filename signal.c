#include <signal.h>
#include <stdio.h>
#include <syscall.h>
#include <unistd.h>

void signalHandler(int sig) {
    const char msg[] = "Caught SIGINT";
    write(STDERR_FILENO, msg, sizeof(msg) - 1);
    _exit(sig);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, signalHandler);
    while (1) {
        printf("waiting for sigint\n");
        sleep(1);
    }
}
