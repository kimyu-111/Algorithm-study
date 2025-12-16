#include <stdio.h>

int main(void){
    int hour,min,a;
    scanf("%d %d",&hour,&min);
    a=(hour*60+min)-45;
    if(a<0) a=1440+a;
    printf("%d %d",a/60,a%60);
 return 0;   
}