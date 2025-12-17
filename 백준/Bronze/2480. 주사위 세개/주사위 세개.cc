#include <stdio.h>

int main(void){
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a)printf("%d",10000+a*1000);
    else if(a!=b && b!=c && c!=a){
        max=a;
        for(int i=0;i<3;i++){
            if(max<b) max=b;
            if(max<c) max=c;
        }
        printf("%d",max*100);
    }
    else if (a==b||a==c){
        printf("%d",1000+a*100);
    }else printf("%d",1000+b*100);
       return 0;
    }
    
