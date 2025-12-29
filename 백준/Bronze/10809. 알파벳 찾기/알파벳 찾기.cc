#include <stdio.h>

int main(void) {
    char S[101]; 
    scanf("%s", S);

    int pos[26];
    for(int i = 0; i < 26; i++) {
        pos[i] = -1;
    }

    for(int i = 0; S[i] != '\0'; i++) {
           int index = S[i] - 'a'; 

                if(pos[index] == -1) {
            pos[index] = i; 
        }
    }
    for(int i = 0; i < 26; i++) {
        printf("%d ", pos[i]);
    }

    return 0;
}