#include <stdio.h>
#include <string.h>

int main() {
    char fileName[] = "file.txt";
    FILE *fptr;
    // the mod can be w, a, r
    fptr = fopen(fileName, "w");

    fprintf(fptr, "hello world");

    // close this file
    fclose(fptr);

    fprintf(stdout, "hello world has been written into file: %s\n", fileName);

    // then we open this file and read it
    fptr = fopen("file.c", "r");

    char buf[100];

    while (fgets(buf, 100, fptr)) {
        printf("%s", buf);
    }
    printf("the size of buf: %zu, the length of buf: %zu\n", sizeof(buf),
           strlen(buf));

    fclose(fptr);

    fptr = fopen("fakeFile.txt", "r");
    if (fptr == NULL) {
        printf("fakeFile.txt not found");
    }
}
