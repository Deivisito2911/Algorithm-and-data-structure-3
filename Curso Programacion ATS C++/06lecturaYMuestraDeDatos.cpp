/*Realice un programa que lea de la entrada estandar los siguientes datos de 
una persona:
    Edad: dato de tipo entero.
    Sexo: dato de tipo caracter.
    Altura en metros: dato de tipo real.
    
Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int edad = 0;
    char sexo[10];
    float altura = 0;
    cout<<"Indiqueme la edad: "<<endl;
    cin>>edad;
    cout<<"Indiqueme su sexo: "<<endl;
    cin>>sexo;
    cout<<"Indiqueme su altura: "<<endl;
    cin>>altura;
    cout<<"Datos de la persona: "<<endl;
    cout<<"Edad: "<<edad<<"\nSexo: "<<sexo<<"\nAltura: "<<altura<<endl;
    getch();
    return 0;
}