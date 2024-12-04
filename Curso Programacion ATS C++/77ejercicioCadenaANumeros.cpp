/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
    char cadenaEntera[100], cadenaFlotante[100];
    int numeroEntero = 0;
    float numeroFlotante = 0;
    cout<<"Indiqueme un numero entero: ";cin>>cadenaEntera;
    cout<<"Indiqueme un numero flotante: ";cin>>cadenaFlotante;
    numeroEntero = atoi(cadenaEntera);
    numeroFlotante = atof(cadenaFlotante);
    cout<<"La suma de los numeros es: "<<numeroEntero+numeroFlotante<<endl;
    getch();
    return 0;
}