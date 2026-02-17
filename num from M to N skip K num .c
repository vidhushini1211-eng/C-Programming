#include <stdio.h> 
int main() { 
int m, n, k, i; 
scanf("%d%d%d", &m,&n,&k); 
for(i = m; i <= n; i = i + (k + 1)) { 
printf("%d ", i); 
} 
return 0; 
}
