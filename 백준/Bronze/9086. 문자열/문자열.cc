#include <stdio.h>
#include <string.h>
int main(void){
    char S[1000];
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%s",S);
        int len=strlen(S);
        printf("%c%c\n",S[0],S[len-1]);
    }
return 0;
}