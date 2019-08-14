#include "header.h"

int main() {
        int yMax,xMax;
        int bubble = 0;
        int x = 0, y = 6;
        int next_x = 0;
        int direction = 1;
        int highlight = 0;
        int lmaxx;
        int choic;
        initscr();
        raw();
        noecho();
        curs_set(0);
        getmaxyx(stdscr, yMax,xMax);
        y = yMax - 12;
        while(1) {
            ++bubble;
            if (bubble == 12) {
                bubble = 0;
            }
            wclear(stdscr);
            small_Fish(x, y - 8, bubble);
            big_Fish(x, y, xMax);
            usleep(DELAY);
            next_x = x + direction;
            if (next_x >= xMax || next_x < 0) {
                x = 0;
            } else {
                x += direction;
            }
            main_Menu(xMax, yMax,&highlight,&lmaxx,&choic);
            if (choic == 10 && highlight == 0) {
                endwin();
                clear();
                fishMV1();
            } else if (choic == 10 && highlight == 1) {
                endwin();
                clear();
                exit(0);
            }
        }
        return 0;
}
