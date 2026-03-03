#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    gets(s);
    printf("Length = %lu", strlen(s));
    return 0;
}
