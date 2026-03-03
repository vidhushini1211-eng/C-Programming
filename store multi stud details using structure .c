#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int marks;
};
int main() {
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++)
        scanf("%d %s %d", &s[i].id, s[i].name, &s[i].marks);
    for(i = 0; i < 3; i++)
        printf("%d %s %d\n", s[i].id, s[i].name, s[i].marks);
    return 0;
}
