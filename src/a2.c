#include "header.h"

int A2(int randAy, int Ay2, int Ax2, int *Ay2r) {
    switch(randAy) {
        case 0:
            mvprintw(Ay2, Ax2, " ___////,,,.._        ,// ");
            mvprintw(Ay2 + 1, Ax2, "/O            ``--.._/// ");
            mvprintw(Ay2 + 2, Ax2, "\\__  \\               ,'  ");
            mvprintw(Ay2 + 3, Ax2, " __)  \\           ___`.  ");
            mvprintw(Ay2 + 4, Ax2, " \\____/__,,,---''''  \\\\ ");
            mvprintw(Ay2 + 5, Ax2, "                      `\\ ");
            Ax2 = Ax2 - 1;
            *Ay2r = Ay2;
            break;
        case 1:
            mvprintw(Ay2 + 10, Ax2, " ___////,,,.._        ,// ");
            mvprintw(Ay2 + 11, Ax2, "/O            ``--.._/// ");
            mvprintw(Ay2 + 12, Ax2, "\\__  \\               ,'  ");
            mvprintw(Ay2 + 13, Ax2, " __)  \\           ___`.  ");
            mvprintw(Ay2 + 14, Ax2, " \\____/__,,,---''''  \\\\ ");
            mvprintw(Ay2 + 15, Ax2, "                      `\\ ");
            Ax2 = Ax2 - 1;
            *Ay2r = Ay2 + 10;
            break;
        case 2:
            mvprintw(Ay2 + 25, Ax2, " ___////,,,.._        ,// ");
            mvprintw(Ay2 + 26, Ax2, "/O            ``--.._/// ");
            mvprintw(Ay2 + 27, Ax2, "\\__  \\               ,'  ");
            mvprintw(Ay2 + 28, Ax2, " __)  \\           ___`.  ");
            mvprintw(Ay2 + 29, Ax2," \\____/__,,,---''''  \\\\ ");
            mvprintw(Ay2 + 30, Ax2, "                      `\\ ");
            Ax2 = Ax2 - 1;
            *Ay2r = Ay2 + 25;
            break;
        case 3:
            mvprintw(Ay2 - 20, Ax2, " ___////,,,.._        ,// ");
            mvprintw(Ay2 - 19, Ax2, "/O            ``--.._/// ");
            mvprintw(Ay2 - 18, Ax2, "\\__  \\               ,'  ");
            mvprintw(Ay2 - 17, Ax2, " __)  \\           ___`.  ");
            mvprintw(Ay2 - 16, Ax2, " \\____/__,,,---''''  \\\\ ");
            mvprintw(Ay2 - 15, Ax2, "                      `\\ ");
            Ax2 = Ax2 - 1;
            *Ay2r = Ay2 -20 ;
            break;
        case 4:
            mvprintw(Ay2 + 35, Ax2, " ___////,,,.._        ,// ");
            mvprintw(Ay2 + 36, Ax2, "/O            ``--.._/// ");
            mvprintw(Ay2 + 37, Ax2, "\\__  \\               ,'  ");
            mvprintw(Ay2 + 38, Ax2, " __)  \\           ___`.  ");
            mvprintw(Ay2 + 39, Ax2," \\____/__,,,---''''  \\\\ ");
            mvprintw(Ay2 + 40, Ax2, "                      `\\ ");
            Ax2 = Ax2 - 1;
            *Ay2r = Ay2 + 35;
            break;
    }
    return Ax2;
}
