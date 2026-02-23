#include <stdio.h>
int main() {
    int a[50]={10,20,30,40,50}, n=5, key=20;
    for(int i=0;i<n;i++)
        if(a[i]==key){
            printf("Found at position %d",i+1);
            return 0; 
        }
    printf("Not found");
}
