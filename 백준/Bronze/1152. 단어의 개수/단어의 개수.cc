#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000005]; 
    int count = 0;
    scanf("%[^\n]", s); 

    int len = strlen(s);
    if (len == 0) {
        printf("0");
        return 0;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    int word_count = count + 1;

    if (s[0] == ' ') {
        word_count -= 1; 
    }
    if (s[len - 1] == ' ') {
        word_count -= 1; 
    }

    printf("%d", word_count);

    return 0;
}