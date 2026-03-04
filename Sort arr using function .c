#include <stdio.h>

void sort(int a[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main() {
    int n, a[50];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
