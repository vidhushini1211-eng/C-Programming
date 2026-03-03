#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
void main(){
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = add(x, y);   // function call
    printf("Sum = %d", result);
}
