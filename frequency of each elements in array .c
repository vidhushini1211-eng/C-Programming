#include <stdio.h>
int main() {
    int a[50], freq[50], n, i, j, count;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) {
        if(freq[i] == -1) {
            count = 1;
            for(j = i+1; j < n; j++)
                if(a[i] == a[j]) {
                    count++;
                    freq[j] = 0;
                }
            freq[i] = count;
        }
    }
    for(i = 0; i < n; i++)
        if(freq[i] != 0)
            printf("%d occurs %d times\n", a[i], freq[i]);
    return 0;
}
