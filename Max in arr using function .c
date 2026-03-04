#include <stdio.h>

int maxArr(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}

int main() {
    int n, a[50];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Max = %d", maxArr(a, n));
    return 0;
}
