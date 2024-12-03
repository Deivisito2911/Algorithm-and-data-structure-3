/*Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso - del ultimo al primer elemento*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int vector[] = {1,2,3,4,5}, tamaño = sizeof(vector)/sizeof(vector[0]);
    for (int i = tamaño ; i > 0; i--){
        cout<<vector[i-1]<<endl;
    }
    getch();
    return 0;
}