#include <stdio.h>
float area(float r) {
    return 3.14 * r * r;
}
int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f", area(radius));
    return 0;
}
