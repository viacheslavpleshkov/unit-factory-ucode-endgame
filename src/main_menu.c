#include "header.h"

void main_Menu(int xMax, int yMax, int *highlight,int *lmaxx ,int *choic) {
    char *choice[2] = {"START" , "QUIT"};

    WINDOW *menu = newwin(7,xMax/2 - 12, yMax/2 - 3, xMax / 4 + 6);
    box(menu, 0, '~');
    //refresh ( );
    keypad(menu,true);
    halfdelay(1);
  //wrefresh  (menu);
    int lmaxy;

    getmaxyx(menu,lmaxy,*lmaxx);

  //Crete Game Name
    game_Name(stdscr, xMax, *lmaxx);
    //game_over(stdscr, xMax, yMax, lmaxx);
  //  wgetch(stdscr);

  //Control Menu
    for (int i = 0; i < 2; ++i) {
        if (i == (*highlight)) {
            wattron(menu, A_REVERSE | A_BOLD);
        }
        mvwprintw(menu,i * 2 + 2, (*lmaxx ) / 2 - 2, choice[i]);
        wattroff(menu, A_REVERSE | A_BOLD);
    }
    *choic = wgetch(menu);
    switch (*choic) {
      case KEY_UP:
        (*highlight)--;
          if ((*highlight) < 0) {
              (*highlight)++;
          }
          return ;
      case KEY_DOWN:
          (*highlight)++;
          if ((*highlight) > 1) {
              (*highlight)--;
          }
          return;
      default:
          return;
      }
   if (*choic == 10 && (*highlight) == 1) {
        //option_Menu(xMax,yMax);
        refresh();
        clear();
        return ;
    }


}
