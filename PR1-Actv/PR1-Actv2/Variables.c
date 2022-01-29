#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

char Elec; //Variable para elegir operacion
int Sum1 = 3;   // Variable para sumar ya definida
int Sum2 = 2;   // Variable para sumar ya definida
int Res1, Res2; // Variables para restar no definidas
float Mul1, Mul2; // Variables para multiplicar no definidas

int main(void){

 initscr();
 
 printw("Por favor si desea sumar pulse 1, si desea restar pulse 2 y si desea multiplicar pulse 3, para salir es 4\n");
 refresh();
 printw("\n");
 refresh();
 scanw("%d", &Elec);
 refresh();
 clear();
 

 switch (Elec) {
 
 
   case 1:
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
 clear();
 break;
  

   case 2:
   printw("Introducir primer valor: \n");
   refresh();
   printw("\n");
   refresh();
   scanw("%d", &Res1);
   refresh();
   clear();
     printw("Introducir segundo valor: \n");
     refresh();
     printw("\n");
     refresh();
     scanw("%d", &Res2);
     refresh();
     clear();
 printw("La resta de %d", Res1); 
 refresh();
 printw(" Y %d", Res2);
 refresh();
 printw(" es igual a %d\n", Res1-Res2);
 refresh();
 sleep(3);
  printw("\n");
 refresh();
 printw("Presiona cualquier tecla para salir\n");
 refresh();
 getch();
 clear();
 break;

 case 3:
   printw("Introducir primer valor: \n");
   refresh();
   printw("\n");
   refresh();
   scanw("%f", &Mul1);
   refresh();
   clear();
     printw("Introducir segundo valor: \n");
     refresh();
     printw("\n");
     refresh();
     scanw("%f", &Mul2);
     refresh();
     clear();
 printw("La resta de %f", Mul1); 
 refresh();
 printw(" Y %f", Mul2);
 refresh();
 printw(" es igual a %f\n", Mul1*Mul2);
 refresh();
 sleep(3);
  printw("\n");
 refresh();
 printw("Presiona cualquier tecla para salir\n");
 refresh();
 getch();
 clear();
 break;

 
 default:
 printw("Numero no valido");
 refresh();
 sleep(2);
 clear();
 break;
 case 4:
 break;


 }
  

 

  printw("Gracias por ver este codigo, pulse enter para salir");
  refresh();
  getch();
  endwin();
  return 0;
}
