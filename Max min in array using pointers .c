#include <stdio.h>
int main() {
    int a[100], n, i, *p;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    p = a;
    int max = *p, min = *p;
    for(i = 1; i < n; i++) {
        if(*(p + i) > max) max = *(p + i);
        if(*(p + i) < min) min = *(p + i);
    }
    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
