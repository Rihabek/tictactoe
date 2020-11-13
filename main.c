#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>


int main(int argc, char const *argv[])
{
  // initialisation SDL
  if (SDL_Init(SDL_INIT_VIDEO) != 0)
  {
      fprintf(stderr, "Could not initialize sdl2: %s\n", SDL_GetError());

      return EXIT_FAILURE;
  }

  SDL_Window *window = SDL_CreateWindow("Procedural",100, 100,SCREEN_WIDTH, SCREEN_HEIGHT,SDL_WINDOW_SHOWN);

  if (window == NULL)
  {
      fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());

      return EXIT_FAILURE;
  }
  
  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
                                              SDL_RENDERER_ACCELERATED |
                                              SDL_RENDERER_PRESENTVSYNC);
  if (renderer == NULL) {
      SDL_DestroyWindow(window);
      fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
      return EXIT_FAILURE;
  }

}
