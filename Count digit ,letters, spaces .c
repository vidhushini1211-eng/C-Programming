#include <stdio.h>
int main() {
    char s[200]="C is easy 123";
    int letters = 0, digits = 0, spaces = 0;
    for (int i = 0; s[i]; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            letters++;
        else if (s[i] >= '0' && s[i] <= '9')
            digits++;
        else if (s[i] == ' ')
            spaces++;
    }
    printf("Letters: %d\nDigits: %d\nSpaces: %d", letters, digits, spaces);
}
