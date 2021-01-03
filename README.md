# tictactoe

@author Belkhadiri rihab et Amrauoi El Mehdi
@prof hoai-diem-phuc ngo

Les @fichier:
main.c
data_game.c
data_game.h
SDL_render.c
SDL_render.h
parametre.h


compiler @tictactoe:
  make

executer @tictactoe:
  ./tictactoe

clean @tictactoe:
  make clean

debug @tictactoe:
  make debug


le 10/nov/2020:

-confirmation de projet avec le @prof, création des @fichier

le 13/nov/2020:

-creation SDL window main.c

14/nov/2020:

-define les parametre qu'on va utiliser dans le programme
-data_game.c
-creation de makefile
  qui contient:
    debugging
    clean
    doxygen
    les fichier src
    les fichier bibleotheque
    les fichier object


15-23/nov/2020:

- SDL_render.c creation des function pour rendre le jeu
- ajout du sons pendant le jeu
- Mise en place d'une function clicked case qui prends 3 parametre game et row et col. qui prends en charge l'état du jeu, si le jeu IS_RUNNING alors player_turn() sinon reset() tout les cases devient EMPTY et le jeu redemare  


le 27/noV/2020:
- cretaation d'un circle avec la bibleotheque SDL2_gfxPrimitives en utilisant la function filledCircleRGBA() et apres et cree une autre circle en utilisant la meme function pour avoir une ligne circle car apparmant il n'y a pas une function qui nous permets de creer une ligne circle.


a faire :
des touche rejoue et quitter
page d'accuile***
fichier d'entrer
allocation memoir
