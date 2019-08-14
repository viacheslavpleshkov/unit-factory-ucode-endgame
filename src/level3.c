#include "header.h"

void level3(int row,int col) {
	mvprintw(row/2 - 3,col/2 - 26," ___      _______  __   __  _______  ___        _______ ");
	mvprintw(row/2 - 2,col/2 - 26,"|   |    |       ||  | |  ||       ||   |      |       |");
	mvprintw(row/2 - 1,col/2 - 26,"|   |    |    ___||  |_|  ||    ___||   |      |___    |");
	mvprintw(row/2,col/2 - 26,    "|   |    |   |___ |       ||   |___ |   |       ___|   |");
	mvprintw(row/2 + 1,col/2 - 26,"|   |___ |    ___||       ||    ___||   |___   |___    |");
	mvprintw(row/2 + 2,col/2 - 26,"|       ||   |___  |     | |   |___ |       |   ___|   |");
	mvprintw(row/2 + 3,col/2 - 26,"|_______||_______|  |___|  |_______||_______|  |_______|");
    halfdelay(10);
    getch();
    clear();
}
