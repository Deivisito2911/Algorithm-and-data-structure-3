/*Longitud de una cadena de caracteres
funcion strlen()*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Deivith";
    int longitud = 0;

    longitud = strlen(palabra);
    cout<<"El nombre tiene "<<longitud<<" letras";

    getch();
    return 0;
}