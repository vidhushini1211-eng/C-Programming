#include <stdio.h>
int main() {
    char s[100], r[100];
    int i, len = 0;
    gets(s);
    while(s[len] != '\0')
        len++;
    for(i = 0; i < len; i++)
        r[i] = s[len - i - 1];
    r[len] = '\0';
    printf("Reversed = %s", r);
    return 0;
}
