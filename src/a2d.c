#include "header.h"

int A2D(int randAy, int DAy2, int DAx2) {
    switch(randAy) {
        case 0:
            mvprintw(DAy2, DAx2, "                          ");
            mvprintw(DAy2 + 1, DAx2, "                          ");
            mvprintw(DAy2 + 2, DAx2, "                           ");
            mvprintw(DAy2 + 3, DAx2, "                          ");
            mvprintw(DAy2 + 4, DAx2, "                         ");
            mvprintw(DAy2 + 5, DAx2, "                          ");
            DAx2 = DAx2 - 1;
            break;
        case 1:
            mvprintw(DAy2 + 10, DAx2, "                          ");
            mvprintw(DAy2 + 11, DAx2, "                          ");
            mvprintw(DAy2 + 12, DAx2, "                           ");
            mvprintw(DAy2 + 13, DAx2, "                          ");
            mvprintw(DAy2 + 14, DAx2, "                         ");
            mvprintw(DAy2 + 15, DAx2, "                         ");
            DAx2 = DAx2 - 1;
            break;
        case 2:
            mvprintw(DAy2 + 25, DAx2, "                          ");
            mvprintw(DAy2 + 26, DAx2, "                          ");
            mvprintw(DAy2 + 27, DAx2, "                           ");
            mvprintw(DAy2 + 28, DAx2, "                          ");
            mvprintw(DAy2 + 29, DAx2, "                         ");
            mvprintw(DAy2 + 30, DAx2, "                         ");
            DAx2 = DAx2 - 1;
            break;
        case 3:
            mvprintw(DAy2 - 20, DAx2, "                          ");
            mvprintw(DAy2 - 19, DAx2, "                          ");
            mvprintw(DAy2 - 18, DAx2, "                           ");
            mvprintw(DAy2 - 17, DAx2, "                          ");
            mvprintw(DAy2 - 16, DAx2, "                         ");
            mvprintw(DAy2 - 15, DAx2, "                         ");
            DAx2 = DAx2 - 1;
            break;
        case 4:
            mvprintw(DAy2 + 35, DAx2, "                          ");
            mvprintw(DAy2 + 36, DAx2, "                          ");
            mvprintw(DAy2 + 37, DAx2, "                           ");
            mvprintw(DAy2 + 38, DAx2, "                          ");
            mvprintw(DAy2 + 39, DAx2, "                         ");
            mvprintw(DAy2 + 40, DAx2, "                         ");
            DAx2 = DAx2 - 1;
            break;
    }
    return DAx2;
}
