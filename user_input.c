#include <stdio.h>

int main() {

    int num;

    printf("type a number:");
    scanf("%d", &num);

    printf("the input number is %d\n", num);

    char ch;

    printf("type a number AND a character then press enter:");
    scanf("%d %c", &num, &ch);

    printf("your num: %d, your char: %c\n", num, ch);

    // the scanf stop when first whitespace (space, tab or new line)
    // so you should just read as single string without space

    char firstName[30];
    printf("enter your first name:");

    // as the firstName is an char*, so there is no need to add &
    // remember to consume this \n
    scanf("%s\n", firstName);
    printf("Hello %s\n", firstName);

    char fullName[30];
    // n is the max char read from stream
    fgets(fullName, 30, stdin);

    printf("Hello %s\n", fullName);
}
