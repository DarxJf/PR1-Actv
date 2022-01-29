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
 printw(" es igual a %d",Sum1+Sum2);
 refresh();
 sleep(3);
  
  
  endwin();
  return 0;
}
