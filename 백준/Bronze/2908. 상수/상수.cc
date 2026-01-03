#include <stdio.h>

int main(void) {
    
    char A[4], B[4];
    
    
    scanf("%s %s", A, B);


    int revA = (A[2] - '0') * 100 + (A[1] - '0') * 10 + (A[0] - '0');
    
    
    int revB = (B[2] - '0') * 100 + (B[1] - '0') * 10 + (B[0] - '0');

    
    if (revA > revB) {
        printf("%d", revA);
    } else {
        printf("%d", revB);
    }

    return 0;
}