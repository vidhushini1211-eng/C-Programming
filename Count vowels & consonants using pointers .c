#include <stdio.h>
int main() {
    char s[100], *p;
    int v = 0, c = 0;
    gets(s);
    p = s;
    while(*p != '\0') {
        if((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
               *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
                v++;
            else
                c++;
        }
        p++;
    }
    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}
