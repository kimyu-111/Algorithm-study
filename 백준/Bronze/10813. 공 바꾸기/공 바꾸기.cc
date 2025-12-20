#include <stdio.h>

int main(void){
    int N,M,i,j,k;
    int a[N];
    scanf("%d %d",&N,&M);
    for (int x=0;x<N;x++){
        a[x]=x+1;
    }
    for (int x=0;x<M;x++){
        scanf("%d %d",&i,&j);
        k=a[i-1];
        a[i-1]=a[j-1];
        a[j-1]=k;
    }
    for (int x=0;x<N;x++){
    printf("%d ",a[x]);
}
}