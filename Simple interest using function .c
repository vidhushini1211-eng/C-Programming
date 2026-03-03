#include <stdio.h>
float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100.0;
}
int main() {
    float p, r, t;
    printf("Enter P, R, T: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest = %.2f", simpleInterest(p, r, t));
    return 0;
}
