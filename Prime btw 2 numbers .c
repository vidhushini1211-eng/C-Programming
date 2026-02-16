#include <stdio.h>
int main() {
    int low, high;
    printf("Enter lower , upper limit: ");
    scanf("%d%d", &low,&high);
    printf("Prime numbers between %d and %d:\n", low, high);
    for(int num = low; num <= high; num++) {
        if(num <= 1)
            continue;
        int isPrime = 1;
        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", num);
    }
    return 0;
}
