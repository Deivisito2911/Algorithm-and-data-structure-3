/*Escribe un programa que defina un vector de numeros y calcule la
multiplicacion acumulada de sus elementos*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int vector[]={1,2,3,4,5,6,7,8,9}, multiplicacion = 1, tamaño = sizeof(vector)/sizeof(vector[0]);
    for (int i = 0; i < tamaño; i++){
        multiplicacion*=vector[i];
    }
    cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;
    getch();
    return 0;
}