/*Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de numeros
del vector*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int vector[] = {4,3,18,8,3}, tamaño = sizeof(vector)/sizeof(vector[0]), suma = 0;
    for (int i = 0; i < tamaño; i++){
        suma = 0;
        for (int i2 = 0; i2 < tamaño; i2++){
            if (i2 != i){
                suma+=vector[i2];
            }
        }
        if (suma == vector[i]){
            cout<<"El valor "<<vector[i]<<" es equivalente a la suma de los otros elementos"<<endl;
        }
    }
    getch();
    return 0;
}