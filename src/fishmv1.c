#include "header.h"

void fishMV1() {
    int max_x = 0;
    int max_y = 0;
    int yD = 5;
    srand(time(NULL));
    int randFish = rand() % 1000 % 100;
    int randAy = rand()% 1000 % 5;
    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    
    int Ax0 = max_x;
    int Ay0 = 25;
    int DAy0 = 25;
    int DAx0 = max_x;

    int Ax1 = max_x;
    int Ay1 = 25;
    int DAy1 = 25;
    int DAx1 = max_x;

    int Ax2 = max_x - 22;
    int Ay2 = 25;
    int DAy2 = 25;
    int DAx2 = max_x - 22;

    int Ax3 = max_x - 33;
    int Ay3 = 25;
    int DAy3 = 25;
    int DAx3 = max_x - 33;

    int x = 13;
    int y = 25;
    int j = 0;

    getmaxyx(stdscr, max_y, max_x);

    int level = 1;

    int xboot = 22;

    int counter = 0;
    int health = 3;
    int Ay0r = Ay0;
    int Ay1r = Ay1;
    int Ay2r = Ay2;
    int Ay3r = Ay3;

    Wave(max_x,3);
    Wave(max_x,4);
    SeaPlant(max_x, max_y);
    level1(max_y,max_x);
    Wave(max_x,3);
    Wave(max_x,4);
    SeaPlant(max_x, max_y);
    for(;;) {
        //Boot start
        heardAscii(health);
        //Boot end
        ++j;
        if (j == 4){
            j = 0;
        }
        if ( j == 3 ){
            Boot(xboot);
                if (max_x -22 == xboot) {
                    ClearBoot(max_x);
                    xboot = 22;
                }
            xboot++;
            }
            if (health == 0) {
                clear();
                game_over(stdscr,max_x,max_y);
                sleep(2);
                endwin();
                return;
        }
        mvprintw(0,0," %d / 5 ", counter);

        if (level == 1) {
            if (Ax0 == x + 5 && Ay0r >= y + 1 && Ay0r <= y + 2 ) {
                ++counter;
                Ax0 = 0;
            } else if (Ax1 == x + 5 && Ay1r >= y + 1 && Ay1r <= y + 2) {
                Ax1 = 0;
                Ax2 = 0;
                clear();
                game_over(stdscr,max_x,max_y);
                sleep(2);
                endwin();
                return;
          } else if (Ax2 == x + 5 && Ay2r + 4 >= y + 1 && Ay2r <= y + 2) {
                Ax2 = 0;
                clear();
                game_over(stdscr,max_x,max_y);
                sleep(2);
                endwin();
                return;
          } else if (Ax3 == x + 5 && Ay3r + 8 >= y + 1 && Ay3r <= y + 2) {
                Ax3 = 0;
                clear();
                game_over(stdscr,max_x,max_y);
                sleep(2);
                endwin();
                return;
          }
        }
        if (Ax0 == x) {
            if (Ax0 == x && Ay0r >= y && Ay0r <= y + 2 ) {
                ++health;
            }
                --health;
            }
        //end-health
        if (level == 2) {
            if (Ax0 == x + 10 && Ay0r >= y + 1 && Ay0r  <= y + 3) {
                ++counter;
                Ax0 = 0;
            } else if (Ax1 == x + 10 && Ay1r + 2 >= y + 1  && Ay1r  <= y + 3) {
                ++counter;
                Ax1 = 0;
              }
             //start-health
             //end-health
             //start-health
              if (Ax1 == x + 10) {
                  if (Ax1 == x + 10 && Ay1r + 2 >= y + 1  && Ay1r  <= y + 3) {
                      ++health;
                  }
                  --health;
              } else if (Ax2 == x + 10 && Ay2r + 4 >= y + 1 && Ay2r <= y + 3) {
                  Ax2 = 0;
                  clear();
                  game_over(stdscr,max_x,max_y);
                  sleep(2);
                  endwin();
                  return;
             } else if (Ax3 == x + 10 && Ay3r + 8 >= y + 1 && Ay3r <= y + 3) {
                  Ax3 = 0;
                  clear();
                  game_over(stdscr,max_x,max_y);
                  sleep(2);
                  endwin();
                  return;
             }
             //end-health
        }
        if (level == 3) {
              if (Ax0 == x + 10 && Ay0r >= y + 1 && Ay0r <= y + 5) {
                  ++counter;
                  Ax0 = 0;
              }
              else if (Ax1 == x + 10 && Ay1r >= y + 1 && Ay1r <= y + 5) {
                  ++counter;
                  Ax1 = 0;
              }
              else if (Ax2 == x + 10 && Ay2r + 4 >= y + 1 && Ay2r <= y + 5) {
                  ++counter;
                  Ax2 = 0;
              }
              //start-health
              if (Ax1 == x + 9) {
                if (Ax1 == x + 9 && Ay1r + 2 >= y + 1  && Ay1r  <= y + 3) {
                    ++health;
                }
                    --health;
              }
              //end-health
              //start-health
              if (Ax2 == x + 9) {
                if (Ax2 == x + 9 && Ay2r + 4 >= y + 1 && Ay2r <= y + 5) {
                    ++health;
                }
                    --health;
              }
              if (Ax3 == x + 8 && Ay3r + 8 >= y + 1 && Ay3r <= y + 5) {
                   Ax3 = 0;
                   clear();
                   game_over(stdscr,max_x,max_y);
                   sleep(2);
                   endwin();
                   return;
              }
              //end-health
        }
        if (counter == 5) {
            level = level + 1;

            //start(max_y)
             if (level == 2) {
               level2(max_y,max_x);
               Wave(max_x,3);
               Wave(max_x,4);
               SeaPlant(max_x, max_y);
            }
            else if (level == 3 ) {
                level3(max_y,max_x);
                Wave(max_x,3);
                Wave(max_x,4);
                SeaPlant(max_x, max_y);
            }
            else if (level == 4) {
                start(max_y);
                cutscene(max_y,max_x);
                clear();
                read_fact();
                halfdelay(1000);
                //getch();
                //halfdelay(1);
                endwin();
                return;
            }
            counter = 0;
        }

        if(Ax0 <= 0 || Ax1 <= 0 || Ax2 <= 0 || Ax3 <= 0) {
            srand(time(NULL));
            randFish = rand() % 1000 % 100;
            srand(time(NULL));
            randAy = rand()% 1000 % 5;

            Ax0 = max_x - 3;
            Ay0 = 25;
            DAy0 = 25;
            DAx0 = max_x - 3;

            Ax1 = max_x - 7;
            Ay1 = 25;
            DAy1 = 25;
            DAx1 = max_x - 7;

            Ax2 = max_x - 35;
            Ay2 = 25;
            DAy2 = 25;
            DAx2 = max_x - 35;

            Ax3 = max_x - 45;
            Ay3 = 25;
            DAy3 = 25;
            DAx3 = max_x - 45;
        }


        if (randFish <= 25) {
            Ax0 = A0(randAy, Ay0, Ax0, &Ay0r);
        }


        if(randFish > 25 && randFish <= 50) {                                    //для создания рыбки(1)
            Ax1 = A1(randAy, Ay1, Ax1,  &Ay1r);
        }

        if(randFish > 50 && randFish <= 75) {                                    //для создания рыбки(2)
            Ax2 = A2(randAy, Ay2, Ax2,  &Ay2r);
        }

        if(randFish > 75 && randFish <= 100) {
            Ax3 = A3(randAy, Ay3, Ax3 , &Ay3r);
        }

        if(y >= 6 && y <= max_y - 9) {
            if(level == 1) {
             mvprintw(y, x, "    )\\     ");
               mvprintw(y + 1, x, "|\\ /  .\\ o");
               mvprintw(y + 2, x, "|/ \\ _ /");
               mvprintw(y + 3, x, "    )/");
            } else if (level == 2) {
               mvprintw(y, x, "     ) \\    o");
               mvprintw(y + 1, x, "|\\ /    .\\ o ");
               mvprintw(y + 2, x, "| |  \\    (  ");
               mvprintw(y + 3, x, "|/ \\     /  ");
               mvprintw(y + 4, x, "     ) /     ");
            } else if(level == 3) {
                mvprintw(y,x , "     |\\   o  ");
                mvprintw(y + 1, x ,  "    |  \\   o  ");
                mvprintw(y + 2, x , "|\\ /    .\\ o ");
                mvprintw(y + 3, x , "| |       (");
                mvprintw(y + 4, x , "|/ \\     /");
                mvprintw(y + 5, x ,    "    |  /");
                mvprintw(y + 6, x, "     |/");
            }
      halfdelay(1);

      int ch = 0;
            if (j == 3) {
                ch = getch();
            }

      switch(ch) {
        case KEY_DOWN:
          yD = y;
          y = y + 1;
                    if(level == 1) {
             mvprintw(yD, x, "            ");
             mvprintw(yD + 1, x, "            ");
             mvprintw(yD + 2, x, "         ");
                       mvprintw(yD + 3, x, "      ");
                    } else if(level == 2) {
                        mvprintw(yD, x, "              ");
                        mvprintw(yD + 1, x, "                ");
                        mvprintw(yD + 2, x, "               ");
                        mvprintw(yD + 3, x, "              ");
                        mvprintw(yD + 4, x, "              ");
                    } else if(level == 3) {
                        mvprintw(yD, x , "              ");
                        mvprintw(yD + 1, x ,  "               ");
                        mvprintw(yD + 2, x , "               ");
                        mvprintw(yD + 3, x , "           ");
                        mvprintw(yD + 4, x , "           ");
                        mvprintw(yD + 5, x ,    "        ");
                        mvprintw(yD + 6, x, "       ");
                    }
          break;
        case KEY_UP:
          yD = y;
          y = y - 1;
          if(level == 1) {
                       mvprintw(yD, x, "            ");
                       mvprintw(yD + 1, x, "            ");
                       mvprintw(yD + 2, x, "         ");
                       mvprintw(yD + 3, x, "      ");
                    } else if(level == 2) {
                        mvprintw(yD, x, "              ");
                        mvprintw(yD + 1, x, "                ");
                        mvprintw(yD + 2, x, "               ");
                        mvprintw(yD + 3, x, "              ");
                        mvprintw(yD + 4, x, "              ");
                    } else if(level == 3) {
                        mvprintw(yD, x , "              ");
                        mvprintw(yD + 1, x ,  "               ");
                        mvprintw(yD + 2, x , "               ");
                        mvprintw(yD + 3, x , "           ");
                        mvprintw(yD + 4, x , "           ");
                        mvprintw(yD + 5, x ,    "        ");
                        mvprintw(yD + 6, x, "       ");
                    }
          break;
        case 'Q':
          endwin();
          exit(0);
          break;
        case 'q':
          endwin();
          exit(0);
          break;
          default:
          break;
      }         // наша рыбка
    } else if (y < 6){
             y = 6;
    } else if (y > max_y - 9) {
             y = max_y - 9;
    }


        if(randFish < 25) {                    //для удаления рыбки(0)
            DAx0 = A0D(randAy, DAy0, DAx0);
        }


        if(randFish > 25 && randFish < 50) {    //для удаления рыбки (1)
            DAx1 = A1D(randAy, DAy1, DAx1);
        }

        if(randFish > 50 && randFish <= 75) {
            DAx2 = A2D(randAy, DAy2, DAx2);
        }

        if(randFish > 75 && randFish <= 100) {
            DAx3 = A3D(randAy, DAy3, DAx3);
        }


  }
  endwin();
}
