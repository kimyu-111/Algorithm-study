#include <stdio.h>

int main(void){
    int A,n,sum=0;
    int a[42]={0,};
    for (int i=0;i<10;i++){
        scanf("%d",&A);
        n=A%42;
        a[n]=1;
    }
    for(int i=0;i<43;i++){
        if(a[i]==1) sum+=1;
    }
   printf("%d",sum);
return 0;
}