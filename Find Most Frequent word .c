#include <stdio.h>
#include <string.h>
int main() {
    char s[200], w[50][20];
    int i=0,j=0,k=0,c[50]={0},mx=0,idx=0;
    gets(s);
    while(s[i]) {
        if(s[i]!=' ') w[k][j++]=s[i];
        else w[k][j]=0, k++, j=0;
        i++;
    }
    w[k][j]=0;
    for(int a=0;a<=k;a++)
        for(int b=0;b<=k;b++)
            if(!strcmp(w[a],w[b])) c[a]++;
    for(int a=0;a<=k;a++)
        if(c[a]>mx) mx=c[a], idx=a;
    printf("Most frequent word: %s", w[idx]);
}
