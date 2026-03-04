#include <stdio.h>

float avg(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return (float)sum / n;
}

int main() {
    int n, a[50];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Average = %.2f", avg(a, n));
    return 0;
}
