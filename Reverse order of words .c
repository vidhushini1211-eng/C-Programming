#include <stdio.h>
int main() {
    char s[100] = "welcome to c programming";
    char w[20][20];
    int i = 0, j = 0, k = 0;
    while (s[i]) {
        if (s[i] != ' ')
           w[k][j++] = s[i];
        else {
           w[k][j] = '\0';
           k++; j = 0;
        }
        i++;
    }
    w[k][j] = '\0';
    for (int a = k; a >= 0; a--)
    printf("%s ", w[a]);
}
