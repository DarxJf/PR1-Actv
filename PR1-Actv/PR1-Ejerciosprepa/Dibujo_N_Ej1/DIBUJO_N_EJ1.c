#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <math.h>

#define MAXIMA_LONGITUD 100
#define caracteres 


int n;

void Concatenar(char c, char *cadena){

  char cadenaTemporal[2];
  cadenaTemporal[0] = c;
  cadenaTemporal[1] = '\0';
  strcat(cadena, cadenaTemporal);
}

int main(int argc, char const *argv[]){
initscr();

printw("Por favor introduce el numero de veces que deseas ejecutar:\n\n");
refresh();
scanw("%d\n", &n);
clear();

char cadena[MAXIMA_LONGITUD] = "*";

 
char c = '*';

int j = 1;
int a = n*2;




while(j < a){



if(j < n){

  Concatenar(c, cadena);
j++;
}else if(j >= n && j < a){ 

printw("%s\n", cadena);
refresh();
j++;
}


}

printw("Gracias por usar mi programa, pulsa enter para salir\n");
getch();
endwin();
  return 0;
}
