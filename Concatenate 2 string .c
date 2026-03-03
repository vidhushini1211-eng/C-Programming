#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int i, j;
    gets(s1);
    gets(s2);
    for(i = 0; s1[i] != '\0'; i++);
    for(j = 0; s2[j] != '\0'; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';
    printf("Concatenated = %s", s1);
    return 0;
}
