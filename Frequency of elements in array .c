#include <stdio.h>
int main() {
    int n,i,j,a[100],v[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(v[i]) 
          continue;
          int c=1;
        for(j=i+1;j<n;j++)
            if(a[i]==a[j]){
                v[j]=1; c++; 
            }
        printf("%d occurs %d times\n",a[i],c);
    }
}
