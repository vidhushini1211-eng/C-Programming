#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}
