#include "header.h"

void Wave(int max_x, int max_y) {
    for (int x = 0; x < max_x; x+=11) {
        if (max_x > x + 1) {
            mvprintw(max_y, x + 1, "`");
        }

        if (max_x > x + 2) {
            mvprintw(max_y, x + 2, "`");
        }
        if (max_x > x + 3) {
            mvprintw(max_y, x + 3, "'");
        }
        if (max_x > x + 4) {
            mvprintw(max_y, x + 4, "-");
        }
        if (max_x > x + 5) {
            mvprintw(max_y, x + 5, ".");
        }
        if (max_x > x + 6) {
            mvprintw(max_y, x + 6, ",");
        }
        if (max_x > x + 7) {
            mvprintw(max_y, x + 7, "_");
        }
        if (max_x > x + 8) {
            mvprintw(max_y, x + 8, ",");
        }
        if (max_x > x + 9) {
            mvprintw(max_y, x + 9, ".");
        }
        if (max_x > x + 10) {
            mvprintw(max_y, x + 10, "-");
        }
        if (max_x > x + 11) {
            mvprintw(max_y, x + 11, "'");
        }
    }
}
