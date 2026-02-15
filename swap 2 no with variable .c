#include <stdio.h>
int main() {
    int a=2,b=3,c;
    printf("Before Swapping: a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping: a=%d,b=%d",a,b);
    return 0;
}
