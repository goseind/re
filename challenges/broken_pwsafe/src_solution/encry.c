#include <stdio.h>
#include <stdlib.h>

char unimportant[50];

void cr (unsigned char *text, int len) {
    const unsigned char enc[8] = {173,135,131,121,110,119,187,143};
    int i;
    for (i = 0; i < len; i++) {
        text[i] ^= enc[i % 8];
    }
    return text;
}

void main(){
    scanf("%s", unimportant);
    cr(unimportant, 4);
}