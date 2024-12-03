/*Escriba un programa que defina un vector de numeros y calcule la suma de
sus elementos */
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int vector[] = {1,2,3,4,5,6,7,8,9,10}, suma = 0, tamaño = sizeof(vector)/sizeof(vector[0]);
    for (int i = 0; i < tamaño ; i++){
        suma+= vector[i];
    }
    cout<<"La suma del vector es: "<<suma<<endl;
    getch();
    return 0;
}