#include <stdio.h>

int main(void) {
    char s[16]; 
    int sum = 0;

    scanf("%s", s);

   
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        
        if (c >= 'A' && c <= 'C') {
            sum += 3; 
        }
        else if (c >= 'D' && c <= 'F') {
            sum += 4; 
        }
        else if (c >= 'G' && c <= 'I') {
            sum += 5; 
        }
        else if (c >= 'J' && c <= 'L') {
            sum += 6; 
        }
        else if (c >= 'M' && c <= 'O') {
            sum += 7; 
        }
        
        else if (c >= 'P' && c <= 'S') {
            sum += 8; 
        }
        else if (c >= 'T' && c <= 'V') {
            sum += 9; 
        }
        
        else if (c >= 'W' && c <= 'Z') {
            sum += 10; 
        }
    }

    printf("%d", sum);

    return 0;
}