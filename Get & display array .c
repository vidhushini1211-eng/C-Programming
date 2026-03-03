#include <stdio.h>
int main() {
    int a[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
