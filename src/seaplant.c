#include "header.h"

void SeaPlant(int xplant, int yplant) {
 for (int x = 0; x < xplant; x+=5) {
            if (xplant > x + 5) {
                mvprintw(yplant - 8, x, "     ");
                mvprintw(yplant - 7, x, "     ");
                mvprintw(yplant - 6, x, "     ");
                mvprintw(yplant - 5, x, "     ");
                mvprintw(yplant - 4, x, " ~Y~ ");
                mvprintw(yplant - 3, x, " \\|/ ");
                mvprintw(yplant - 2, x, " \\|/ ");
                mvprintw(yplant - 1, x, "^^^^^");
            }
            x+=5;
            if (xplant > x + 5) {
                mvprintw(yplant - 8, x, " ~Y~ ");
                mvprintw(yplant - 7, x, " \\|/ ");
                mvprintw(yplant - 6, x, " \\|/ ");
                mvprintw(yplant - 5, x, " \\|/ ");
                mvprintw(yplant - 4, x, " \\|/ ");
                mvprintw(yplant - 3, x, " \\|/ ");
                mvprintw(yplant - 2, x, " \\|/ ");
                mvprintw(yplant - 1, x, "^^^^^");
            }
            x+=5;
            if (xplant > x + 5) {
                mvprintw(yplant - 7, x, "      ");
                mvprintw(yplant - 6, x, " ~Y~ ");
                mvprintw(yplant - 5, x, " \\|/ ");
                mvprintw(yplant - 4, x, " \\|/ ");
                mvprintw(yplant - 3, x, " \\|/ ");
                mvprintw(yplant - 2, x, " \\|/ ");
                mvprintw(yplant - 1, x, "^^^^^^");
            }
            x+=5;
            if(xplant > x + 5) {
                mvprintw(yplant - 8, x, "");
                mvprintw(yplant - 7, x, "");
                mvprintw(yplant - 6, x, "");
                mvprintw(yplant - 5, x, "" );
                mvprintw(yplant - 1, x, "^^^^^");
                mvprintw(yplant - 4, x, " .-.");
                mvprintw(yplant - 3, x, "(o.o)" );
                mvprintw(yplant - 2, x, " |=| ");
            }
        refresh();
  }
}
