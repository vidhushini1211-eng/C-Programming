#include <stdio.h>
int main() {
    int n, i, arr[100], odd = 0, even = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Total Even Numbers = %d\n", even);
    printf("Total Odd Numbers = %d\n", odd);
    return 0;
}
