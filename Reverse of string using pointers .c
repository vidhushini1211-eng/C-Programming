#include <stdio.h>
#include <string.h>
int main() {
    char s[100], *p, *q, temp;
    gets(s);
    p = s;
    q = s + strlen(s) - 1;
    while(p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("Reversed = %s", s);
    return 0;
}
