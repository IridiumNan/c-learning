#include <stdio.h>

int add(int a, int b) { return a + b; }

void greet() { printf("hello world\n"); }

void fakeadd() { printf("add\n"); }
void fakesub() { printf("sub\n"); }

void fakemulti() { printf("multi\n"); }

void wrapper(void (*func)()) {
    printf("calling the wrapper\n");
    func();
    printf("wrapper end\n");
}

int main() {
    // declare a function pointer:
    // returnType (*pointerName) (parameterType1, parameterType2, ...)
    int (*addPtr)(int, int) = add;
    // add is equal to &add
    printf("%d + %d = %d\n", 3, 4, addPtr(3, 4));

    // we can also use function as a parameter
    wrapper(greet);

    // function pointer array
    void (*fakeFuncs[3])() = {fakeadd, fakesub, fakemulti};

    for (int i = 0; i < 3; i++) {
        fakeFuncs[i]();
    }
}
