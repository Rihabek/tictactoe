#include "parametre.h"
#include "SDL_render.h"
#include "data_game.h"


#include <SDL2/SDL.h>


int main(int argc, char const *argv[])
{
  SDL_Window *window;
  // initialisation SDL
  if (SDL_Init(SDL_INIT_VIDEO) != 0)
  {
      fprintf(stderr, "Could not initialize sdl2: %s\n", SDL_GetError());

      return EXIT_FAILURE;
  }

  window = SDL_CreateWindow("SDL2 window",100, 100,SCREEN_WIDTH, SCREEN_HEIGHT,SDL_WINDOW_OPENGL);

  if (window == NULL)
  {
      fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());

      return EXIT_FAILURE;
  }

  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
  if (renderer == NULL)
  {
    SDL_DestroyWindow(window);
    fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }

  /*
  les cases du jeu est empty
  player is X
  state game is running
  */
  game_t game = {
      .table = { EMPTY, EMPTY, EMPTY,
                 EMPTY, EMPTY, EMPTY,
                 EMPTY, EMPTY, EMPTY },
      .player = PLAYER_X,
      .game_state = IS_RUNNING
  };

  SDL_Event a;
  while (game.game_state != QUIT_GAME)
  {
    while (SDL_PollEvent(&a))
    {
      switch (a.type)
      {
        case SDL_QUIT:
            game.game_state = QUIT_GAME;
            break;

        case SDL_MOUSEBUTTONDOWN:
            clicked_cell(&game, a.button.y/HEIGHT, a.button.x/WIDTH);
            break;

        default: {}
      }
    }
      /*
      ce fonction SDL_SetRenderDrawColor mettre un background noir
      */
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    render_game(renderer,&game);
    SDL_RenderPresent(renderer);
  }


  SDL_DestroyWindow(window);
  SDL_Quit();

  return EXIT_SUCCESS;

}
