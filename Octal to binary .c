#include <stdio.h>
int main() {
    int octal, decimal = 0, binary[50];
    int rem, i = 0, base = 1;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    int temp = octal;
    while(temp > 0) {
        rem = temp % 10;
        decimal += rem * base;
        base *= 8;
        temp /= 10;
    }
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary = ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
