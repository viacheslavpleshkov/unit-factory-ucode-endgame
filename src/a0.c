#include "header.h"

int A0(int randAy, int Ay0, int Ax0 , int *Ay0r) {
    switch(randAy) {
        case 0:
            mvprintw(Ay0 + 1, Ax0, "<><");
            Ax0 = Ax0 - 1;
            *Ay0r = Ay0 + 1;
            break;
        case 1:
            mvprintw(Ay0 + 10, Ax0, "<><");
            Ax0 = Ax0 -1;
            *Ay0r = Ay0 + 10;
            break;
        case 2:
            mvprintw(Ay0 + 25, Ax0, "<><");
            Ax0 = Ax0 -1;
            *Ay0r = Ay0 + 25;
            break;
        case 3:
            mvprintw(Ay0 - 15, Ax0, "<><");
            Ax0 = Ax0 -1;
            *Ay0r = Ay0 -15 ;
            break;
        case 4:
            mvprintw(Ay0 + 35, Ax0, "<><");
            Ax0 = Ax0 -1;
            *Ay0r = Ay0 + 35;
            break;
    }
    refresh();
    return Ax0;
}
