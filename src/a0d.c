#include "header.h"

int A0D(int randAy, int DAy0, int DAx0) {
    switch(randAy) {
        case 0:
            mvprintw(DAy0 + 1, DAx0  , "   ");
            DAx0 = DAx0 - 1;
            break;
        case 1:
            mvprintw(DAy0 + 10, DAx0  , "   ");
            DAx0 = DAx0 - 1;
            break;
        case 2:
            mvprintw(DAy0 + 25, DAx0  , "   ");
            DAx0 = DAx0 - 1;
            break;
        case 3:
            mvprintw(DAy0 - 15, DAx0  , "   ");
            DAx0 = DAx0 - 1;
            break;
        case 4:
            mvprintw(DAy0 + 35, DAx0  , "   ");
            DAx0 = DAx0 - 1;
            break;
        }
    refresh();
    return DAx0;
}
