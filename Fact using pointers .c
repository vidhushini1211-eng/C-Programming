#include <stdio.h>
int main() {
int n, fact = 1;
int *p = &fact;
printf("Enter a number: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
*p = *p * i;
printf("Factorial = %d", *p);
}
