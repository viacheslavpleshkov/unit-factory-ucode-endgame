#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h>
#define DELAY 1000

void small_Fish (int x, int y , int bubble);
void big_Fish(int x,int y, int xMax);
void game_over(WINDOW *stdscr, int xMax, int yMax);
void game_Name(WINDOW *stdscr, int xMax, int lmaxx);
void SeaPlant(int xplant, int yplant);
void start(int row);
void level1(int row,int col);
void level2(int row,int col);
void level3(int row,int col);
void ClearBoot(int max_x);
void Wave(int max_x, int max_y);
void Boot(int xboot);
void heardAscii(int x);
int A0(int randAy, int Ay0, int Ax0 , int *Ay0r);
int A0D(int randAy, int DAy0, int DAx0);
int A1(int randAy, int Ay1, int Ax1, int *Ay1r);
int A1D(int randAy, int DAy1, int DAx1);
int A2(int randAy, int Ay2, int Ax2, int *Ay2r);
int A2D(int randAy, int DAy2, int DAx2);
int A3(int randAy, int Ay3, int Ax3 , int *Ay3r);
int A3D(int randAy, int DAy3, int DAx3);
void cutscene (int row,int col);
void fishMV1();
void read_fact();
void main_Menu(int xMax, int yMax, int *highlight,int *lmaxx ,int *choic);
int main();

#endif
