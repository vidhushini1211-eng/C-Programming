#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, p;

    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &p);

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<p;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<p;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<p;j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Addition Result:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
