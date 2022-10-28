#include <stdio.h>

typedef struct player
{
    char name[80];
    float x;
    float y;
} player_t;

void printPlayer(player_t *p)
{
    printf("Player %s coordinates = [%d, %d]", p->name, p->x, p->y);
}

int main(int argc, char **argv)
{
    player_t p = {.name = "EmptyAndBroken", .x = 1001.0012, .y = 23011.1122};
    return 0;
}