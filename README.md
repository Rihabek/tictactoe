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

- SDL_render.c creation des function uitilil pour rendre le jeu
- Sepparation des fichier src qui contient les bibleotheque et le file music , et le makefile.
- Mise en place d'une function clicked cell qui prends 3 parametre game et row et col. qui prends en charge l'état du jeu, si le jeu IS_RUNNING alors player_turn() sinon reset_game() tout les cases devient EMPTY et le jeu redemare  
