#ifndef PARAMETRE_H_
#define PARAMETRE_H_

#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
/*
define player x et player o

*/
#define EMPTY 0
#define PLAYER_X 1
#define PLAYER_O 2

/* game states
running = 0
player x =1
player o = 2
tie =3
quit =4
*/
#define IS_RUNNING 0
#define PLAYER_X_WON_GAME 1
#define PLAYER_O_WON_GAME 2
#define TIE_GAME 3
#define QUIT_GAME 4

typedef struct
{
    int player;
    int game;
} game_t;

#endif
