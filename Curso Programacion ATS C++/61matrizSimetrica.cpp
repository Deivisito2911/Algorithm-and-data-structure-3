/*Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int filas = 0, columnas = 0;
    cout<<"Programa para saber si una matriz es simetrica"<<endl;
    cout<<"Indiqueme el numero de filas de su matriz: ";cin>>filas;
    cout<<"Indiqueme el numero de columnas de su matriz: ";cin>>columnas;
    int matriz[filas][columnas];
    bool esSimetrica = true;
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            cout<<"Ingrese el valor para fila "<<i+1<<" columna "<<i2+1<<": ";
            cin>>matriz[i][i2];
        }
    }
    //determinar si es simetrica
    if (filas == columnas){
        for (int i = 0; i < filas; i++){
            for (int i2 = 0; i2 < columnas; i2++){
                if (matriz[i][i2] != matriz[i2][i]){
                    esSimetrica = false;
                }
            }
        }
    }
    if (esSimetrica==true){
        cout<<"Es una matriz simetrica"<<endl;
    }else{
        cout<<"No es una matriz simetrica";
    }
    getch();
    return 0;
}