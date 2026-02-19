#include <stdio.h>
int main() {
    int n, i, arr[100], key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("%d is present in the array.", key);
    else
        printf("%d is NOT present in the array.", key);
    return 0;
}
