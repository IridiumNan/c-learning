#include <stdio.h>

int main() {
    int myAge = 18;

    int *agePtr = &myAge;
    // use & to get the address of something
    printf("the address: %p\n", &myAge);

    printf("the ptr: %p\n", agePtr);

    // try to change value of this address
    *agePtr = 19;

    // 19
    printf("my age: %d\n", myAge);

    // move pointer
    int nums[4] = {25, 50, 75, 100};
    // point to the first address
    int *p = nums;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));

    // subtraction
    int *start = &nums[0];
    int *end = &nums[3];

    int distance = end - start;
    printf("element between start and end: %d\n", distance);
}
