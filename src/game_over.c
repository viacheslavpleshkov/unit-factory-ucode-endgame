#include "header.h"

void game_over(WINDOW *stdscr, int xMax, int yMax) {
  mvwprintw(stdscr,0  + yMax / 2 - 3,xMax / 2  - 73,"   {____                                                                               {____                                                \n");
  mvwprintw(stdscr,1+ yMax / 2 - 3,xMax / 2  - 73," {_    {__                                                                           {__    {__                                             \n");
  mvwprintw(stdscr,2 + yMax / 2 - 3,xMax / 2  - 73,"{__                {__         {___ {__ {__         {__                            {__        {__     {__     {__        {__         {_ {___\n");
  mvwprintw(stdscr,3 + yMax / 2 - 3,xMax / 2  - 73,"{__              {__  {__       {__  {_  {__      {_   {__                         {__        {__      {__   {__       {_   {__       {__\n");
  mvwprintw(stdscr,4 + yMax / 2 - 3,xMax / 2  - 73,"{__   {____     {__   {__       {__  {_  {__     {_____ {__                        {__        {__       {__ {__       {_____ {__      {__\n");
  mvwprintw(stdscr,5 + yMax / 2 - 3,xMax / 2  - 73," {__    {_      {__   {__       {__  {_  {__     {_                                  {__     {__         {_{__        {_              {__   \n");
  mvwprintw(stdscr,6 + yMax / 2 - 3,xMax / 2  - 73,"  {_____          {__ {___     {___  {_  {__       {____                               {____              {__           {____        {___   \n");
  mvwprintw(stdscr,7 + yMax / 2 - 3,xMax / 2  - 73,"                                                                                                                                               \n");
  wrefresh(stdscr);
}
