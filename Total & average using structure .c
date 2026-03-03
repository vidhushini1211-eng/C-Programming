#include <stdio.h>
struct Marks {
    int m1, m2, m3;
};
int main() {
    struct Marks s;
    scanf("%d%d%d", &s.m1, &s.m2, &s.m3);
    int total = s.m1 + s.m2 + s.m3;
    float avg = total / 3.0;
    printf("Total = %d\nAverage = %.2f", total, avg);
    return 0;
}
