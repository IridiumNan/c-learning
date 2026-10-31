#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    int age;
    char name[30];
};

void reportStu(FILE *out, struct Student s) {
    fprintf(out, "student information\nid: %d\nage: %d\nname: %s\n\n", s.id,
            s.age, s.name);
}

void simple() {
    struct Student s;
    s.id = 1;
    s.age = 18;
    strcpy(s.name, "IridiumNan");

    reportStu(stdout, s);

    // you can also just assign values when create
    struct Student s1 = {2, 18, "Zhangsan"};
    reportStu(stdout, s1);

    // modify values (for string should use the strcpy funcion)
    strcpy(s1.name, "Hello");
    reportStu(stdout, s1);
}
struct Owner {
    char firstName[30];
    char lastName[30];
};

struct Car {
    char brand[30];
    int year;
    struct Owner owner;
};

void reportCar(FILE *out, struct Car c) {
    fprintf(out, "Car information\n\
    brand: %s\n\
    year: %d\n\
\
    owner information\n\
        name: %s %s\n\n",
            c.brand, c.year, c.owner.lastName, c.owner.firstName);
}

void changeCar(struct Car c) { c.year = 0; }

void pointerChangeCar(struct Car *c) { c->year = 0; }

void nested() {
    // This is a nested structures demo
    struct Owner owner = {"John", "Duo"};
    struct Car car1 = {"Toyota", 2021, owner};

    reportCar(stdout, car1);

    struct Car car2 = {"haha", 2019, {"Ahsa", "Lis"}};

    reportCar(stdout, car2);

    // there is no change about this car
    // for change, must use pointer to this car
    changeCar(car2);
    reportCar(stdout, car2);

    pointerChangeCar(&car2);
    reportCar(stdout, car2);
}

int main() {
    simple();
    printf("\n\n");
    nested();
}
