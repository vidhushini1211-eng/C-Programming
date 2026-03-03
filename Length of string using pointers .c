#include <stdio.h>
int main() {
    char s[100], *p;
    int count = 0;
    gets(s);
    p = s;
    while(*p != '\0') {
        count++;
        p++;
    }
    printf("Length = %d", count);
    return 0;
}
