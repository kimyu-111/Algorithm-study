#include <stdio.h>

int main(void){
    int A,B,C,a;
    scanf("%d %d",&A,&B);
    scanf("%d",&C);
    a=(A*60+B)+C;
    printf("%d %d",(a/60)%24,a%60);
return 0;
}