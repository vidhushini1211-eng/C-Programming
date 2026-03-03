#include <stdio.h>
int main() {
    char s[100];
    int i, j, flag = 0;
    gets(s);
    for(i = 0; s[i] != '\0'; i++);
    for(j = 0; j < i/2; j++) {
        if(s[j] != s[i-j-1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
