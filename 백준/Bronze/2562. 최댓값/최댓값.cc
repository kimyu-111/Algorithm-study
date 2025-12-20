#include <stdio.h>

int main(void){
    int a[9];
    for(int i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int maxn=0;
    for(int i=0;i<9;i++){
        if(max<a[i]) {
            max=a[i];
            maxn=i;           
    }
    }
    printf("%d\n%d",max,maxn+1);
    return 0;
}