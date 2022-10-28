#include <stdio.h>

int main() {
    FILE * pFile = fopen("words.txt", "a");
    char character;
    while ((character = getchar()) != EOF) {
        if (character != EOF) {
            putc(character, pFile);
            fflush(pFile);
        }
    }
    puts("WRITE FINISHED");
    return 0;
}