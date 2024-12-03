/*Realiza un programa que deifna una amtriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int fila = 3, columna = 3;
    int matriz[fila][columna], contador = 5;
    for (int i = 0; i < fila; i++){
        for (int i2 = 0; i2 < columna; i2++){
            matriz[i][i2]=contador;
            contador++;
        }
    }
    for (int i = 0; i < fila; i++){
        for (int i2 = 0; i2 < columna; i2++){
            if (i == i2){
                cout<<"["<<matriz[i][i2]<<"]";
            }else{
                cout<<"[ ]";
            }
        }
        cout<<endl;
    }
    getch();
    return 0;
}