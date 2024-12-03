/*Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas 
y columnas, posteriormente mostrar la matriz en pantalla*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int filas = 0, columnas = 0;
    cout<<"Ingrese el numero de filas de la matriz: "; cin>>filas;
    cout<<"Ingrese el numero de columnas de la matriz: "; cin>>columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            cout<<"Ingrese el valor para fila "<<i+1<<" columna "<<i2+1<<": ";
            cin>>matriz[i][i2];
        }
    }
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            cout<<"["<<matriz[i][i2]<<"]";
        }
        cout<<endl;
    }
    getch();
    return 0;
}