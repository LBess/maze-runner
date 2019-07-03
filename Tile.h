#ifndef TILE
#define TILE

// Tile Macros
#define EMPTY_TILE ' '
#define WALL_TILE 'W'
#define START_TILE 'S'
#define END_TILE 'E'
#define PLAYER_TILE 'P'
#define GOBLIN_TILE 'G'

struct Tile
{
    char val;
    Tile(): val(EMPTY_TILE) {}
    Tile(char c): val(c) {}
};

#endif