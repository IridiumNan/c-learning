#include <stdio.h>

typedef struct {
    int id;
    int age;
    char name[30];
} Student;

// for typedef, there is no need to add keyword struct
void reportStu(FILE *out, const Student *s) {
    fprintf(out, "student information\nid: %d\nage: %d\nname: %s\n\n", s->id,
            s->age, s->name);
}

// define a funcion pointer type
typedef int (*Operator)(int, int);

int add(int a, int b) { return a + b; }

int main() {
    Student s = {1, 18, "Zhangsan"};
    reportStu(stdout, &s);

    Operator f = add;

    printf("%d + %d = %d\n", 3, 4, f(3, 4));
}
