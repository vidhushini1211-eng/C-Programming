#include <stdio.h> 
int main() { 
    int num, n, sum, r; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    n = num; 
    while (n > 9) {   
        sum = 0; 
        while (n > 0) { 
            r = n % 10; 
            sum += r; 
            n /= 10; 
        } 
        n = sum; 
    } 
    if (n == 1) 
        printf("Magic Number"); 
    else 
        printf("Not a Magic Number"); 
    return 0;
}
