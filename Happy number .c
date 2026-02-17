#include <stdio.h> 
int main() { 
    int num, n, r, sum; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    n = num; 
    while (n != 1 && n != 4) { 
        sum = 0; 
        while (n > 0) { 
            r = n % 10; 
            sum += r * r; 
            n /= 10; 
        } 
        n = sum; 
    } 
    if (n == 1) 
        printf("Happy Number"); 
    else 
        printf("Not a Happy Number"); 
    return 0; 
} 
