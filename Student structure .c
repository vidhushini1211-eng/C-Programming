#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int age;
};
int main() {
    struct Student s = {1, "Arun", 20};
    printf("ID: %d\nName: %s\nAge: %d", s.id, s.name, s.age);
    return 0;
}
