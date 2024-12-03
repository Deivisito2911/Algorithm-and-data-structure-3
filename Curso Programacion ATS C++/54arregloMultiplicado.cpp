/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados por 2 y muestre el segundo arreglo */
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int cantidadNumeros = 5;
    int arreglo[cantidadNumeros], arregloResultante[cantidadNumeros];
    for (int i = 0; i < cantidadNumeros; i++){
        cout<<"Indiqueme numero para la pocicion "<<i+1<<": ";
        cin>>arreglo[i];
    }
    for (int i = 0; i < cantidadNumeros; i++){
        arregloResultante[i] = arreglo[i]*2;
    }
    for (int i = 0; i < cantidadNumeros; i++){
        cout<<"Posicion "<<i+1<<" valor: "<<arregloResultante[i]<<endl;
    }
    getch();
    return 0;
}