#include "header.h"

void ClearBoot(int max_x) {
    mvprintw(0, max_x - 20, "                    ");
    mvprintw(1, max_x - 20, "                    ");
    mvprintw(2, max_x - 21, "                     ");
}
