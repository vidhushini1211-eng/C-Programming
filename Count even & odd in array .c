#include <stdio.h>
int main() {
    int a[50], n, i, odd = 0, even = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) 
            even++;
        else 
            odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}
