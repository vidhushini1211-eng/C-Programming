#include <stdio.h> 
int main() { 
    int num, sum = 0, r, n; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    n = num; 
    while (n > 0) { 
        r = n % 10; 
        sum += r; 
        n /= 10; 
    } 
    if (num % sum == 0) 
        printf("Harshad Number"); 
    else 
        printf("Not a Harshad Number"); 
    return 0; 
}
