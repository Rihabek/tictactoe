#include "SDL_render.h"
#include <math.h>



/*
const color pour les lignes du jeu
const color rouge pour le player X
const color vert pour le player O
const color white pour le tie game
*/
const SDL_Color LINE_COLOR =
{
  .r = 255,
  .g = 255,
  .b = 255
};
const SDL_Color PLAYER_X_COLOR =
{
  .r = 255,
  .g = 50,
  .b = 50
};

const SDL_Color PLAYER_O_COLOR =
{
  .r = 0,
  .g = 128,
  .b = 0
};

const SDL_Color TIE_COLOR =
{
  .r =100,
  .g = 100,
  .b = 100
};
void render_lines(SDL_Renderer *renderer,const SDL_Color *color)
{
  SDL_SetRenderDrawColor(renderer,color->r,color->g,color->b, 255);

  for (int i = 1; i < N; i++)
  {
    SDL_RenderDrawLine(renderer,i * WIDTH, 0, i * WIDTH, SCREEN_HEIGHT);
    SDL_RenderDrawLine(renderer,0, i * HEIGHT,SCREEN_WIDTH, i * HEIGHT);
  }
}

void render_table(SDL_Renderer *renderer,
                  const int *table,
                  const SDL_Color *player_x_color,
                  const SDL_Color *player_o_color)
{
    

}

void render_is_running(SDL_Renderer *renderer, const game_t *game)
{
    render_lines(renderer, &LINE_COLOR);
    render_table(renderer, game->table, &PLAYER_X_COLOR, &PLAYER_O_COLOR);

}

void render_game_over(SDL_Renderer *renderer,
                      const game_t *game,
                      const SDL_Color *color)
{
    render_lines(renderer, color);
    render_table(renderer, game->table, color,color);
}



/** on utilise const game psk on veut pas qu'il fait
des changement sur le jeu on veut qu'il render le state de game
*/
void render_game(SDL_Renderer *renderer, const game_t *game)
{
    switch (game->game_state)
    {
      case IS_RUNNING:
          render_is_running(renderer, game);
          break;

      case PLAYER_X_WON_GAME:
          render_game_over(renderer, game, &PLAYER_X_COLOR);
          break;

      case PLAYER_O_WON_GAME:
          render_game_over(renderer, game, &PLAYER_O_COLOR);
          break;

      case TIE_GAME:
          render_game_over(renderer, game, &TIE_COLOR);
          break;

      default: {}
    }
}
