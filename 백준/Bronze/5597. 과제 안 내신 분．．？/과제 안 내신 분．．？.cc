#include <stdio.h>

int main(void){
    int a[31],n;
    for(int i=0;i<31;i++){
        a[i]=0;
    }
    for(int i=0;i<28;i++){
        scanf("%d",&n);
        a[n]=1;
    }
    for(int i=1;i<31;i++){
        if(a[i]==0) printf("%d\n",i);
    }
return 0;
}