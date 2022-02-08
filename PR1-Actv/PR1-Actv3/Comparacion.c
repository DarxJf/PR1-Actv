#include <stdio.h>
#include <ncurses.h>
#include <math.h>

int main(){
char nombre[30];
char apellido[30];
int edad;
int curso;
char secc;
int nota;




initscr();
printw("Bienvenido al programa, pulse cualquier tecla para continuar");
refresh();
getch();
clear();

printw("Por favor introducir nombre del estudiante: \n\n");
refresh();
scanw("%s\n\n", &nombre);
printw("\n");
printw("Apellido: \n\n");
refresh();
scanw("%s \n", &apellido);
printw("\n");
printw("Introducir edad: \n\n");
refresh();
scanw("%d\n\n", &edad);
printw("\n");
printw("Indicar curso actual: \n\n");
refresh();
scanw("%d\n\n", &curso);
printw("\n");
printw("Seccion actual: \n\n");
refresh();
scanw("%c\n\n", &secc);
printw("\n");
printw("Indicar nota del estudiante: \n\n");
refresh();
scanw("%d\n\n", &nota);
clear();




if (nota >= 10) {

printw("Nombre: %s\n\n", nombre);
refresh();
printw("Apellido: %s\n\n", apellido);
refresh();
printw("Edad: %d\n\n", edad);
refresh();
printw("Curso: %d\n\n", curso);
refresh();
printw("Seccion: %c\n\n", secc);
refresh();
printw("Nota: %d\n\n", nota);
refresh();
printw("El estudiante ha aprobado el curso\n\n");
refresh();
printw("Pulse cualquier tecla para salir");
refresh();
getch();
} else if(nota < 10){

printw("Nombre: %s\n\n", nombre);
refresh();
printw("Apellido: %s\n\n", apellido);
refresh();
printw("Edad: %d\n\n", edad);
refresh();
printw("Curso: %d\n\n", curso);
refresh();
printw("Seccion: %c\n\n", secc);
refresh();
printw("Nota: %d\n\n", nota);
refresh();
printw("El estudiante ha reprobado el curso\n\n");
refresh();
printw("Pulse cualquier tecla para salir");
refresh();
getch();

}


endwin();
  return 0;


}

