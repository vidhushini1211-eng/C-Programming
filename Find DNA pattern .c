#include <stdio.h>
#include <string.h>
int main() {
    char seq[200]="ATCGATCGAATCGA", pat[50]="ATCGA";
    int lenS, lenP, count = 0;
    lenS = strlen(seq);
    lenP = strlen(pat);
    printf("Pattern found at positions: ");
    for (int i = 0; i <= lenS - lenP; i++) {
        if (strncmp(&seq[i], pat, lenP) == 0) {
            printf("%d ", i + 1);
            count++;
        }
     }
     printf("\nTotal occurrences: %d", count);
}
