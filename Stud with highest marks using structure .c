#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int marks;
};
int main() {
    struct Student s[3];
    int i, maxIndex = 0;
    for(i = 0; i < 3; i++)
        scanf("%d %s %d", &s[i].id, s[i].name, &s[i].marks);
    for(i = 1; i < 3; i++)
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    printf("Topper: %s with %d marks", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}
