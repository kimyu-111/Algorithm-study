#include <stdio.h>

int main(void){
    long int N;
    scanf("%ld",&N);
    long int a[N];
    for(int i=0;i<N;i++){
        scanf("%ld",&a[i]);
    }
    long int max=a[0];
    long int min=a[0];
    for(int i=0;i<N;i++){
        if(max<a[i]) max=a[i];
        
        if(min>a[i]) min=a[i];
    }
    printf("%d %d",min,max);
return 0;
}