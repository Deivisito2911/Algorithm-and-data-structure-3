/*Transformar una cadena a numeros
Funcion 
atoi() entero y 
atof() flotante*/
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
    char cadena[] = "123";
    char cadenaF[] = "123.563";
    int numero = 0;
    float numeroFloat = 0;
    numero = atoi(cadena);
    numeroFloat = atof(cadenaF);
    cout<<numero+1<<endl;
    cout<<numeroFloat+1.235<<endl;
    getch();
    return 0;
}