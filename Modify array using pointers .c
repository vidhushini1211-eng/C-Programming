#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5}, i;
    int *p = a;
    for(i = 0; i < 5; i++)
        *(p + i) += 1;  // modify
    for(i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    return 0;
}
