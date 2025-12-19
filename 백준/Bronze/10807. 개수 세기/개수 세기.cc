#include <stdio.h>

int main(void){
    int N,v,k,sum=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&k);
        a[i]=k;
    }
    scanf("%d",&v);
    for (int j=0;j<N;j++){
        if(a[j]==v) sum+=1;
    }
    printf("%d",sum);
    return 0;
}