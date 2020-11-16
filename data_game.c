#include "data_game.h"
#include "parametre.h"


void change_player(game_t *game)
{
    if (game->player == PLAYER_X)
    {
        game->player = PLAYER_O;
    } else if (game->player == PLAYER_O)
    {
        game->player = PLAYER_X;
    }
}
