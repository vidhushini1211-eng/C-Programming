#include <stdio.h>
int main() {
    int a[50]={10,20,30,40,50},n=5,key=20,l=0,h,m;
    h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==key){ printf("Found at position %d",m+1); 
        return 0;
        }
        else if(key<a[m]) h=m-1;
        else l=m+1;
    }
    printf("Not found");
}
