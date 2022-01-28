#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int main(void){
  initscr();
  for(int i=2;i>=0;i--){
  printw("Hello world\n");
  refresh();
  sleep(2);
  clear();
  printw("Hola mundoo");
  refresh();
  sleep(2);
  clear();
  }
  endwin();
  return 0;
}
