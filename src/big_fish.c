#include "header.h"

void big_Fish(int x,int y, int xMax) {
    mvprintw(y  , xMax - x , "        __,---//////////,        .///");
    mvprintw(y + 1 , xMax - x  , "     __  ) ) ) ) ) )''////      /////");
    mvprintw(y + 2 , xMax - x , " _,-' ))'. ) ) ) ) ) ) ) ) )'-. //////");
    mvprintw(y + 3 , xMax - x , "/  ()_)))))\\  ) ) ) ) ) ) ) ) )////////");
    mvprintw(y + 4 , xMax - x , "\\______ )))))) ) ) ) ) ) ) ) )\\\\\\\\\\\\\\\\");
    mvprintw(y + 5 , xMax - x , "  '''''/)))/ ) ) ) ) ) ) ) ),-'\\\\\\\\\\\\\\");
    mvprintw(y + 6 , xMax - x , "  ___,')),') ) ) ) )_),,--'     \\\\\\\\\\\\");
    mvprintw(y + 7 , xMax - x , " (________.\\\\)_),--'             '\\\\\\\\");
    mvprintw(y + 8 , xMax - x , "          -\\\\\\                    '\\\\\\");
    refresh();
}
