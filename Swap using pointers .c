#include <stdio.h>
int main() {
    int a, b, *p, *q, temp;
    scanf("%d%d", &a, &b);
    p = &a;
    q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("a = %d, b = %d", a, b);
    return 0;
}
