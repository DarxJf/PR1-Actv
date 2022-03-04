#include <stdio.h>
#include <ncurses.h>

int main(){
initscr();
int n;

printw("Por favor introduce cuantas veces quieres las repeticiones:\n\n");
refresh();
scanw("%d", &n);
printw("\n");
refresh();

char g = '*';

for(int i = 0; i < n; i++){
for(int j = 0; j <= i; j++){

printw("%c", g);


}
printw("\n");
refresh();
}
printw("\n");
refresh();
printw("\nGracias por usar mi programa, pulsa cualquier tecla para salir\n\n");
getch();
endwin();
  return 0;
}
