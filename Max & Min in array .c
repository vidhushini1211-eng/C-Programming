#include <stdio.h>
int main() {
    int n, i, arr[100], min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Smallest element = %d\n", min);
    printf("Biggest element = %d\n", max);
    return 0;
}
