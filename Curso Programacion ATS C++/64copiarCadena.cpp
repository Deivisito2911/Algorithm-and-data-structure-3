/*Copiar el contenido de una cadena a otra
Funcion strcpy()*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char nombre[] = "Deivith";
    char nombre2[100];
    strcpy(nombre2,nombre);
    cout<<nombre2;
    getch();
    return 0;
}