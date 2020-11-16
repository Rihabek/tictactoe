#include <stdlib.h>
#include <stdio.h>
#include "parametre.h"

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

  // SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
  // if (renderer == NULL) {
  //     SDL_DestroyWindow(window);
  //     fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
  //     return EXIT_FAILURE;
  // }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return EXIT_SUCCESS;

}
