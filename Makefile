NAME = endgame

SRCS = src/main.c
SRCSOB =main.c

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