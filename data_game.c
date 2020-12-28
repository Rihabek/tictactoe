#include "data_game.h"
#include "parametre.h"

// void player_x_won(game_t *game, int row, int col)
// {
//   if (game->table[row * N + col] == PLAYER_X)
//   {
//
//   }
// }
// void game_over_condition(game_t *game)
// {
//   game->player = PLAYER
// }

void switch_player(game_t *game)
{
    if (game->player == PLAYER_X)
    {
        game->player = PLAYER_O;
    } else if (game->player == PLAYER_O)
    {
        game->player = PLAYER_X;
    }
}

void player_turn(game_t *game, int row, int col)
{
    if (game->table[row * N + col] == EMPTY)
    {
        game->table[row * N + col] = game->player;
        switch_player(game);
        // game_over_condition(game);
    }
}

void reset_game(game_t *game)
{
    game->player = PLAYER_X;
    game->game_state = IS_RUNNING;
    for (int i = 0; i < N * N; ++i)
    {
        game->table[i] = EMPTY;
    }
}

void clicked_cell(game_t *game, int row, int col)
{
    if (game->game_state == IS_RUNNING) {
        player_turn(game, row, col);
    } else {
        reset_game(game);
    }
}
