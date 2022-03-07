#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>


#define LONGITUD_MAXIMA 100
int n;

void Concatenacion(char c, char *cadena){

char cadenaTemporal[2];
cadenaTemporal[0] = c;
cadenaTemporal[1] = '\0';
strcat(cadena, cadenaTemporal);
}

int main(int argc, char const *argv[]){

initscr();

printw("Introduce el numero de veces que quiere que se ejecute:\n\n");
refresh();
scanw("%d\n", &n);
clear();
char cadena[LONGITUD_MAXIMA] = "*";

printw("%s\n", cadena);
refresh();
for(int j = 1; j < n; j++){




char c = '*';

Concatenacion(c, cadena);

printw("%s\n", cadena);
refresh();
}
printw("Gracias por usar mi programa, pulsa enter para salir\n");
getch();
endwin();
  return 0;
}
