#include <Windows.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define Arriba 72
#define Izquierda  75
#define Derecha 77
#define Abajo 80
#define Esc 27 
int x = 10;
int y = 12;
 int cuerpo[200][2];
 char tecla;
 int n = 1;
 int tamanio =4;
void gotoxy (int x,int y ) // funcion de posicion 
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;

    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition (hCon,dwPos);
}

void pintar(){ //lineas del juego  horizontales
for (int i = 2; i <78 ; i++){
    gotoxy(i,3); printf("%c",205);
    gotoxy(i,23); printf("%c",205 );


}
// lineas verticales 
for (int i = 4; i <23 ; i++){

    
    gotoxy(2,i); printf("%c",186);
    gotoxy(77,i); printf("%c",186 );


}
// creacion de las esquinas  
    gotoxy(2,3); printf("%c",201);   //posicion de inicio cueropo 
    gotoxy(2,23); printf("%c",200 );
    gotoxy(77,3); printf("%c",187);
    gotoxy(77,23); printf("%c",188 );
}
void guardar_posicion(){
cuerpo[n][0] = x ;
cuerpo[n][1] = y;
n++; // se guardan las posiciones en cada parte de la matriz 
if (n == tamanio) n = 1; // se sobre escriben los datos 




}
void pintar_cuerpo(){
for (int i = 0; i <tamanio; i++)
{
    gotoxy(cuerpo[i][0],cuerpo[1][0]);printf("%c",2);

}
}
void borrar_cuerpo(){

    gotoxy(cuerpo[n][0],cuerpo[n][0]);printf(" ");
}
void pintarelcuerpo(){

}
int main (){
while (tecla != Esc)
{
    borrar_cuerpo();
    guardar_posicion();
    pintarelcuerpo();
    x ++;
    Sleep(100);
}




system ("COLOR 2 "); // cambiar el color 
pintar();
system("pause > null "); 
return 0;
        }


