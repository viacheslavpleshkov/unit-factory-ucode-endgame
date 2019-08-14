#include "header.h"

int A1D(int randAy, int DAy1, int DAx1) {
    switch(randAy) {
        case 0:
            mvprintw(DAy1, DAx1   ,"       ");
            mvprintw(DAy1 + 1, DAx1 + 1 , "        ");
            mvprintw(DAy1 + 2, DAx1 + 2 , "       ");
            DAx1 = DAx1 - 1;
            break;
        case 1:
            mvprintw(DAy1 + 10, DAx1   ,"       ");
            mvprintw(DAy1 + 11, DAx1 + 1 , "        ");
            mvprintw(DAy1 + 12, DAx1 + 2 , "       ");
            DAx1 = DAx1 - 1;
            break;
        case 2:
            mvprintw(DAy1 + 25, DAx1   ,"       ");
            mvprintw(DAy1 + 26, DAx1 + 1 , "        ");
            mvprintw(DAy1 + 27, DAx1 + 2 , "       ");
            DAx1 = DAx1 - 1;
            break;
        case 3:
            mvprintw(DAy1 - 17, DAx1   ,"       ");
            mvprintw(DAy1 - 16, DAx1 + 1 , "        ");
            mvprintw(DAy1 - 15, DAx1 + 2 , "       ");
            DAx1 = DAx1 - 1;
            break;
        case 4:
            mvprintw(DAy1 + 35, DAx1   ,"       ");
            mvprintw(DAy1 + 36, DAx1 + 1 , "        ");
            mvprintw(DAy1 + 37, DAx1 + 2 , "       ");
            DAx1 = DAx1 - 1;
            break;
                }
    return DAx1;
}
