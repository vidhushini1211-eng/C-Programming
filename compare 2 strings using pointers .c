#include <stdio.h>
int main() {
    char s1[100], s2[100];
    char *p = s1, *q = s2;
    gets(s1);
    gets(s2);
    while(*p != '\0' && *q != '\0') {
        if(*p != *q)
            break;
        p++;
        q++;
    }
    if(*p == *q)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
    return 0;
}
