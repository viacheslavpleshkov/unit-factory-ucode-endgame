#include "header.h"

void heardAscii(int x) {
        if (x ==  3) {
        mvprintw(0,0, " _  _");
        mvprintw(1,0, "( `' )");
        mvprintw(2,0, " `.,' ");
        mvprintw(0,7, " _  _");
        mvprintw(1,7, "( `' )");
        mvprintw(2,7, " `.,' ");
        mvprintw(0,14, " _  _");
        mvprintw(1,14, "( `' )");
        mvprintw(2,14, " `.,' ");
    }
    if (x ==  2) {
        mvprintw(0,0, " _  _");
        mvprintw(1,0, "( `' )");
        mvprintw(2,0, " `.,' ");
        mvprintw(0,7, " _  _");
        mvprintw(1,7, "( `' )");
        mvprintw(2,7, " `.,' ");
        mvprintw(0,14, "     ");
        mvprintw(1,14, "      ");
        mvprintw(2,14, "      ");
    }
    if (x ==  1) {
        mvprintw(0,0, " _  _");
        mvprintw(1,0, "( `' )");
        mvprintw(2,0, " `.,' ");
        mvprintw(0,7, "     ");
        mvprintw(1,7, "      ");
        mvprintw(2,7, "      ");
        mvprintw(0,14, "     ");
        mvprintw(1,14, "      ");
        mvprintw(2,14, "      ");
    }
}
