#include <stdio.h>

int main(void){
    int N,M,i,j,k;
    scanf("%d %d",&N,&M);
    int a[N+1];
    for (int i=1;i<N+1;i++){
        a[i]=i;
    }
    for (int l=0;l<M;l++){
        scanf("%d %d",&i,&j);
        while(i<j){
        k=a[i];
        a[i]=a[j];
        a[j]=k;
        i++;
        j--;
        }
    }
     for(int i=1;i<=N;i++){
         printf("%d ",a[i]);
     }
    return 0;
    }



