NAME = endgame

SRCS = src/small_Fish.c \
		src/big_fish.c \
		src/game_over.c \
		src/game_name.c \
		src/seaplant.c \
		src/start.c \
		src/level1.c \
		src/level2.c \
		src/level3.c \
		src/boot.c \
		src/clearboot.c \
		src/wave.c \
		src/heardascii.c \
		src/a0.c \
		src/a0d.c \
		src/a1.c \
		src/a1d.c \
		src/a2.c \
		src/a2d.c \
		src/a3.c \
		src/a3d.c \
		src/cutscene.c \
		src/fishmv1.c \
		src/read_fact.c \
		src/main_menu.c \
		src/main.c
SRCSOB = small_Fish.c \
		big_fish.c \
		game_over.c \
		game_name.c \
		seaplant.c \
		start.c \
		level1.c \
		level2.c \
		level3.c \
		boot.c \
		clearboot.c \
		wave.c \
		heardascii.c \
		a0.c \
		a0d.c \
		a1.c \
		a1d.c \
		a2.c \
		a2d.c \
		a3.c \
		a3d.c \
		cutscene.c \
		fishmv1.c \
		read_fact.c \
		main_menu.c \
		main.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all