#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    // it will be 26
    printf("the length of alphabet: %zu\n", strlen(alphabet));

    // it will be 26 + 1 (as there is an \0 in the end)
    printf("the size of alphabet: %zu\n", sizeof(alphabet));

    char alphabet_[50] = "abcdefghijklmnopqrstuvwxyz";

    // it will be 26
    // when encout the \0, it stop to count
    printf("the length of alphabet_: %zu\n", strlen(alphabet_));

    // it will be 50
    printf("the size of alphabet_: %zu\n", sizeof(alphabet_));

    // We can concat string with function [strcat]
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // this function change str1 inplace
    // so ensure there are enough space
    strcat(str1, str2);

    printf("%s\n", str1);
}
