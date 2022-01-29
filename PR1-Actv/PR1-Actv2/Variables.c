#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>


int Sum1 = 3; 
int Sum2 = 2;


int main(void){

 initscr(); 
 printw("La suma de %d", Sum1); 
 refresh();
 printw(" Y %d", Sum2);
 refresh();
 printw(" es igual a %d\n",Sum1+Sum2);
 refresh();
 sleep(3);
  printw("\n");
 refresh();
 printw("Presiona cualquier tecla para salir\n");
 refresh();
 getch();
  endwin();
  return 0;
}
