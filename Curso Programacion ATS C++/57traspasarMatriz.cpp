/*Hacer  una matriz de tipo entera de 2x2, llenarla de numeros y
luego copiar todo su contenido hacia otra matriz*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int filas = 2, columnas = 2;
    int matriz[filas][columnas], matriz2[filas][columnas], numero = 0;
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            matriz[i][i2] = numero;
            numero++;
        }
    }
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            matriz2[i][i2] = matriz[i][i2];
            cout<<"["<<matriz2[i][i2]<<"]";
        }
        cout<<endl;
    }
    getch();
    return 0;
}