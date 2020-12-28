#include "parametre.h"
#include "fichier.h"

char** fichier_txt(FILE* fichier)
{
  // int nb = 60;
  // char** tab[][];
  char mode = 0;
  fichier = fopen("tictactoe.txt","r");

  if (fichier == NULL)
  {
    printf("Error impossible de lire le fichier: %s\n", SDL_GetError());
  }


  // mode = fgetc(fichier);
  while ( mode != EOF)
  {
    mode = fgetc(fichier);
    printf("%c",mode);
  }

  fclose(fichier);

}
