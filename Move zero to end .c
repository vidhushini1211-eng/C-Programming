#include <stdio.h>
int main() {
    int a[10] = {0,1,9,8,0,2}, n =6 , j = 0;
    for(int i = 0; i < n; i++)
    if(a[i] != 0)
         a[j++] = a[i];
    while(j < n)
         a[j++] = 0;
    for(int i = 0; i < n; i++)
         printf("%d ", a[i]);
}
