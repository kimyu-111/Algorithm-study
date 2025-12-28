#include <stdio.h>

int main(void){
    int N;
    int sum = 0;
    char arr[101]; 

    scanf("%d", &N);
    scanf("%s", arr); 

    for(int i = 0; i < N; i++){
        sum += arr[i] - '0'; 
    }

    printf("%d", sum);
    
    return 0;
}