#include <stdio.h>
#include <string.h>
int main() {
    char a[50]="listen", b[50]="silent";
    int c1[256] = {0}, c2[256] = {0};
    if (strlen(a) != strlen(b)) {
    printf("The strings are not properly connected.");
    }
    for (int i = 0; a[i]; i++)
        c1[a[i]]++;
    for (int i = 0; b[i]; i++)
        c2[b[i]]++;
    for (int i = 0; i < 256; i++)
        if (c1[i] != c2[i]) {
        printf("The strings are not properly connected.");
        return 0;
    }
    printf("The strings are properly connected.");
}
