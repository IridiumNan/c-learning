#include <ctype.h>
#include <stdio.h>

int main() {
    char str[] = "Hello w0rld!\n";

    int size = sizeof(str) / sizeof(str[0]);

    printf("%s", str);

    for (int i = 0; i < size; i++) {
        if (isalpha(str[i])) {
            printf("pos %d is a letter\n", i);
        } else if (isdigit(str[i])) {
            printf("pos %d is a digit\n", i);
        } else if (isspace(str[i])) {
            printf("pos %d is a white space\n", i);
        }
    }

    char c = 'c';
    char b = 'B';

    printf("%c to uppper -> %c\n", c, toupper(c));
    printf("%c to lower -> %c\n", b, tolower(b));
}
