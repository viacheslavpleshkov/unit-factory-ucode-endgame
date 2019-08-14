#include "header.h"

int A1(int randAy, int Ay1, int Ax1, int *Ay1r) {
    switch(randAy) {
        case 0:
            mvprintw(Ay1, Ax1 ,"   __  ");
            mvprintw(Ay1 + 1, Ax1 + 1 , " /o \\/");
            mvprintw(Ay1 + 2, Ax1 + 2 , "\\__/\\");
            Ax1 = Ax1 - 1;
            *Ay1r = Ay1;
            break;
        case 1:
            mvprintw(Ay1 + 10, Ax1 ,"   __  ");
            mvprintw(Ay1 + 11, Ax1 + 1 , " /o \\/");
            mvprintw(Ay1 + 12, Ax1 + 2 , "\\__/\\");
            Ax1 = Ax1 - 1;
            *Ay1r = Ay1 + 10;
            break;
        case 2:
            mvprintw(Ay1 + 25, Ax1 ,"   __  ");
            mvprintw(Ay1 + 26, Ax1 + 1 , " /o \\/");
            mvprintw(Ay1 + 27, Ax1 + 2 , "\\__/\\");
            Ax1 = Ax1 - 1;
            *Ay1r = Ay1 + 25;
            break;
        case 3:
            mvprintw(Ay1 - 17, Ax1 ,"   __  ");
            mvprintw(Ay1 - 16, Ax1 + 1 , " /o \\/");
            mvprintw(Ay1 - 15, Ax1 + 2 , "\\__/\\");
            Ax1 = Ax1 - 1;
            *Ay1r = Ay1 - 17;
            break;
        case 4:
            mvprintw(Ay1 + 35, Ax1 ,"   __  ");
            mvprintw(Ay1 + 36, Ax1 + 1 , " /o \\/");
            mvprintw(Ay1 + 37, Ax1 + 2 , "\\__/\\");
            Ax1 = Ax1 - 1;
            *Ay1r = Ay1 + 35;
            break;
    }
    return Ax1;
}
