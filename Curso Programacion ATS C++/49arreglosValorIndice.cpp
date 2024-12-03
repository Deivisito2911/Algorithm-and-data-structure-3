/*Escribe un programa que lea de la entrada estandar un vector de numeros y 
muestre en la salida estandar los numeros del vector con sus indices asociados.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int numElementos = 5;
    int vector[numElementos];
    for (int i = 0; i < numElementos; i++){
        cout<<"Indiqueme el valor para la posicion "<<i+1<<" del vector: ";
        cin>>vector[i];
    }
    for (int i = 0; i < numElementos; i++){
        cout<<"Posicion: "<<i+1<<" valor: "<<vector[i]<<endl;
    }
    getch();
    return 0;
}