CFLAGS = -O3 -g `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs` -lSDL2_ttf  -lm
CCLINK = -lGL -lGLU -lSDL

INC = data_game.h SDL_render.h parametre.h
SRC = main.c SDL_render.c data_game.c

OBJ = $(SRC:%.c=%.o)

PROG = tictactoe

%.o: %.c $(INC)
	gcc $(CFLAGS) -c $<

tictactoe: $(OBJ)
	gcc $(CFLAGS) $(OBJ) $(LDFLAGS) -o $@

doc: $(PROG)
	doxygen ./$(PROG)
	make -C latex

debug:
	  gcc -DDEBUG -Wall -o main.c data_game.c SDL_render.c -lm

clean:
	rm -f *~ *.o $(PROG)
	rm -rf latex html
