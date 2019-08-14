#include "header.h"

int A3D(int randAy, int DAy3, int DAx3) {
        switch(randAy) {
            case 0:
                mvprintw(DAy3  , DAx3, "                                     ");
                mvprintw(DAy3 + 1 , DAx3, "                                     ");
                mvprintw(DAy3 + 2 , DAx3, "                                      ");
                mvprintw(DAy3 + 3 , DAx3, "                                       ");
                mvprintw(DAy3 + 4 , DAx3, "                                               ");
                mvprintw(DAy3 + 5 , DAx3, "                                           ");
                mvprintw(DAy3 + 6 , DAx3, "                                            ");
                mvprintw(DAy3 + 7 , DAx3, "                                            ");
                mvprintw(DAy3 + 8 , DAx3, "                                            ");
                DAx3 = DAx3 - 1;
                break;
            case 1:
                mvprintw(DAy3 + 10 , DAx3, "                                     ");
                mvprintw(DAy3 + 11 , DAx3, "                                     ");
                mvprintw(DAy3 + 12 , DAx3, "                                        ");
                mvprintw(DAy3 + 13 , DAx3, "                                        ");
                mvprintw(DAy3 + 14 , DAx3, "                                               ");
                mvprintw(DAy3 + 15 , DAx3, "                                           ");
                mvprintw(DAy3 + 16 , DAx3, "                                            ");
                mvprintw(DAy3 + 17 , DAx3, "                                            ");
                mvprintw(DAy3 + 18 , DAx3, "                                            ");
                DAx3 = DAx3 - 1;
                break;
            case 2:
                mvprintw(DAy3 + 25 , DAx3, "                                     ");
                mvprintw(DAy3 + 26 , DAx3, "                                     ");
                mvprintw(DAy3 + 27 , DAx3, "                                        ");
                mvprintw(DAy3 + 28 , DAx3, "                                        ");
                mvprintw(DAy3 + 29 , DAx3, "                                               ");
                mvprintw(DAy3 + 30 , DAx3, "                                           ");
                mvprintw(DAy3 + 31 , DAx3, "                                            ");
                mvprintw(DAy3 + 32 , DAx3, "                                            ");
                mvprintw(DAy3 + 33 , DAx3, "                                            ");
                DAx3 = DAx3 - 1;
                break;
            case 3:
                mvprintw(DAy3 - 20 , DAx3, "                                     ");
                mvprintw(DAy3 - 19 , DAx3, "                                     ");
                mvprintw(DAy3 - 18 , DAx3, "                                        ");
                mvprintw(DAy3 - 17 , DAx3, "                                        ");
                mvprintw(DAy3 - 16 , DAx3, "                                               ");
                mvprintw(DAy3 - 15 , DAx3, "                                           ");
                mvprintw(DAy3 - 14 , DAx3, "                                            ");
                mvprintw(DAy3 - 13 , DAx3, "                                            ");
                mvprintw(DAy3 - 12 , DAx3, "                                            ");
                DAx3 = DAx3 - 1;
                break;
            case 4:
                mvprintw(DAy3 + 35 , DAx3, "                                     ");
                mvprintw(DAy3 + 36 , DAx3, "                                     ");
                mvprintw(DAy3 + 37 , DAx3, "                                        ");
                mvprintw(DAy3 + 38 , DAx3, "                                        ");
                mvprintw(DAy3 + 39 , DAx3, "                                               ");
                mvprintw(DAy3 + 40 , DAx3, "                                           ");
                mvprintw(DAy3 + 41 , DAx3, "                                            ");
                mvprintw(DAy3 + 42 , DAx3, "                                            ");
                mvprintw(DAy3 + 43 , DAx3, "                                            ");
                DAx3 = DAx3 - 1;
                break;
    }
    return DAx3;
}
