#include <stdio.h>
int main() {
    char s[200];
    int i, words = 1;
    gets(s);
    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0')
            words++;
    printf("Words = %d", words);
    return 0;
}
