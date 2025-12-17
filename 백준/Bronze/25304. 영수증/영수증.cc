#include <stdio.h>

int main(void){
    long int X,a,sum=0;
    int N,b;
    scanf("%d",&X);
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        sum+=a*b;
    }
    if (X==sum) printf("Yes");
    else printf("No");
return 0;
}