#include <stdio.h>

int sum(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum = %d", sum(n));
    return 0;
}
