#include <stdio.h>

int main(void){
    int N,M,i,j,k;
    scanf("%d %d",&N,&M);
    int a[N];
    for(int i=0;i<N;i++){
        a[i]=0;
    }
    for(int x=0;x<M;x++){
       scanf("%d %d %d",&i,&j,&k);
    for(int x=i-1;x<j;x++){
       a[x]=k;
   }
   }
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
return 0;
}