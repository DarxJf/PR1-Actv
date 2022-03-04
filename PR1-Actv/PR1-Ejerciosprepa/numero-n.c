#include <stdio.h>
#include <ncurses.h>
#include <math.h>

int main(){

initscr();

int n;
printw("Por favor introducir cuantas veces quiere la repeticion:\n\n");
refresh();
scanw("%d", &n);
printw("\n");
refresh();
char g = '*'; //Cuando coloque esta variable como char me arroja que es * y cuando la evaluo en los enteros me arroja que es 42

for (int i = n; i > 0; i--){
for(int j = 0; j < n; j++){

//char g = '*';
//printw("%c", g);
  //printw("*");



printw("%c", g);
refresh();



 
}
printw("\n");
refresh();
}
/*int j = 0;
while(j < n){



printw("*");
refresh();




}
*/

printw("\n");
refresh();

printw("Gracias por usarlo, pulse cualquier tecla para salir\n\n");
refresh();
getch();
endwin();
  return 0;
}
