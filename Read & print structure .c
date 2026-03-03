#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int age;
};
void read(struct Student *s) {
    scanf("%d", &s->id);
    scanf("%s", s->name);
    scanf("%d", &s->age);
}
void print(struct Student s) {
    printf("ID: %d\nName: %s\nAge: %d", s.id, s.name, s.age);
}
int main() {
    struct Student s;
    read(&s);
    print(s);
    return 0;
}
