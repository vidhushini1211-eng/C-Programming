#include <stdio.h>
void printNames(char *name[], int n) {
    for(int i = 0; i < n; i++)
        printf("%s\n", name[i]);
}
int main() {
    char *names[] = {"Arun", "Bala", "Chitra"};
    printNames(names, 3);
    return 0;
}
