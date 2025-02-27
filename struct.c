#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

struct Teacher {
    char name[50];
    int age;
    char subject[50];
};

int main() {
    struct Student s1 = {"Alice", 20, 88.5};
    printf("Name: %s, Age: %d, Marks: %.2f\n", s1.name, s1.age, s1.marks);

    struct Teacher t1 = {"Mr Murimi", 35, "Science"};
    printf("Name: %s, Age: %d, Subject: %s\n", t1.name, t1.age, t1.subject);
    return 0;
}
