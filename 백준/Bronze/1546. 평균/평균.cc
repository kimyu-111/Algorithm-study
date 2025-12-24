#include <stdio.h>

int main(void){
    int N,M,x;
    float avg=0;
    scanf("%d",&N);
    int a[N]={0,};
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        a[i]=x;
    }
    M=a[0];
    for(int i=0;i<N;i++){
        if(M<a[i]) M=a[i];
    }
    for(int i=0;i<N;i++){
        avg+=(double)a[i]/M*100;
        
    }
    printf("%f",avg/N);
return 0; 
}