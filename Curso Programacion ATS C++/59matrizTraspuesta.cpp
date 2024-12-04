/*Realice un programa que lea una matriz 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la
matriz original
1 2 3           1 4 7
4 5 6           2 5 8
7 8 9           3 6 9*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int filas = 3, columnas = 3;
    int matriz[filas][columnas], matriztraspuesta[filas][columnas];
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            cout<<"Ingrese el valor para fila "<<i+1<<" columna "<<i2+1<<" : ";cin>>matriz[i][i2];
        }
    }
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            matriztraspuesta[i][i2] = matriz[i2][i];
            cout<<"["<<matriztraspuesta[i][i2]<<"]";
        }
        cout<<endl;
    }
    getch();
    return 0;
}