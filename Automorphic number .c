#include <stdio.h> 
int main() { 
    int num, sq; 
    printf("Enter a number: "); 
    scanf("%d",&num); 
    sq = num * num; 
    if (sq % 10==num%10||sq%100==num%100||sq % 1000 == num % 1000) 
        printf("Automorphic Number"); 
    else 
        printf("Not an Automorphic Number"); 
    return 0; 
}
