#include "header.h"

void small_Fish (int x, int y , int bubble) {
    if (bubble < 3) {
           mvprintw(y - 45, x, "     |\\     ");
           mvprintw(y + 1 - 45, x, "    |  \\     ");
           mvprintw(y + 2 - 45, x, "|\\ /    .\\  ");
           mvprintw(y + 3 - 45, x, "| |       (");
           mvprintw(y + 4 - 45, x, "|/ \\     /");
           mvprintw(y + 5 - 45, x, "    |  /");
           mvprintw(y + 6 - 45, x, "     |/");
           refresh();
     }
     else if (bubble < 6) {
          mvprintw(y - 45, x, "     |\\     ");
          mvprintw(y + 1 - 45, x, "    |  \\     ");
          mvprintw(y + 2 - 45, x, "|\\ /    .\\ o");
          mvprintw(y + 3 - 45, x, "| |       (");
          mvprintw(y + 4 - 45, x, "|/ \\     /");
          mvprintw(y + 5 - 45, x, "    |  /");
          mvprintw(y + 6 - 45, x, "     |/");
          refresh();
    }
    else  if (bubble < 9) {
         mvprintw(y - 45, x, "     |\\     ");
         mvprintw(y + 1 - 45, x, "    |  \\    o");
         mvprintw(y + 2 - 45, x, "|\\ /    .\\ o");
         mvprintw(y + 3 - 45, x, "| |       (");
         mvprintw(y + 4 - 45, x, "|/ \\     /");
         mvprintw(y + 5 - 45, x, "    |  /");
         mvprintw(y + 6 - 45, x, "     |/");
         refresh();
    }
    else  if (bubble < 12) {
        mvprintw(y - 45, x, "     |\\    o");
        mvprintw(y + 1 - 45, x, "    |  \\    o");
        mvprintw(y + 2 - 45, x, "|\\ /    .\\ o");
        mvprintw(y + 3 - 45, x, "| |       (");
        mvprintw(y + 4 - 45, x, "|/ \\     /");
        mvprintw(y + 5 - 45, x, "    |  /");
        mvprintw(y + 6 - 45, x, "     |/");
        refresh();
    }
}
