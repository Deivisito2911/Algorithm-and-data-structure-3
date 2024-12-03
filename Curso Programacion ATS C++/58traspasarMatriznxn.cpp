/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de
numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en
pantalla*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int filas = 0, columnas = 0, numero = 0;
    srand(time(NULL));
    cout<<"Indicame el numero de filas: ";cin>>filas;
    cout<<"Indicame el numero de columnas: ";cin>>columnas;
    int matriz[filas][columnas], matriz2[filas][columnas];
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            numero = 1 + rand()%(100);
            matriz[i][i2] = numero;
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