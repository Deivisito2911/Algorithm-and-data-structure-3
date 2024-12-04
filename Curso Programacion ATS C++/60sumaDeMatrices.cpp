/*Realice un programa que calcule la suma
de dos matrices cuadradas de 3x3*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int filas = 3, columnas = 3;
    int matrizA[filas][columnas], matrizB[filas][columnas], matrizResultado[filas][columnas], numero = 1;
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            matrizA[i][i2] = numero;
            matrizB[i][i2] = numero+5;
            numero++;
        }
    }
    for (int i = 0; i < filas; i++){
        for (int i2 = 0; i2 < columnas; i2++){
            matrizResultado[i][i2] = matrizA[i][i2]+matrizB[i][i2];
            cout<<"["<<matrizResultado[i][i2]<<"]";
        }
        cout<<endl;
    }
    getch();
    return 0;
}