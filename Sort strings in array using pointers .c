#include <stdio.h>
#include <string.h>
int main() {
    char *s[5] = {"banana", "apple", "cherry", "mango", "grape"};
    char *temp;
    int i, j;
    for(i = 0; i < 4; i++)
        for(j = i+1; j < 5; j++)
            if(strcmp(s[i], s[j]) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    for(i = 0; i < 5; i++)
        printf("%s\n", s[i]);
    return 0;
}
