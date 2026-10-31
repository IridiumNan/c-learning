#include <stdio.h>

int main() {
    char fruits[3][10] = {"Apple", "Banana", "Orange"};

    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }

    // get a single char
    printf("the second char on second fruit is %c\n", fruits[2][2]);
}
