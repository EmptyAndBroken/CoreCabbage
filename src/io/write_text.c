#include <stdio.h>

int main(int argc, char **argv)
{

    FILE *pFile = fopen("src\\io\\outcome.txt", "a");

    char character;

    puts("STARTED WRITING");
    while ((character = getchar()) != EOF)
    {
        if (character != EOF)
        {
            putc(character, pFile);
            fflush(pFile);
        }
    }
    puts("WRITE FINISHED");
    return 0;
}