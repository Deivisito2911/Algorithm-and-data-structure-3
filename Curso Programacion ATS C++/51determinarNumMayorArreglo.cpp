/*Desarrolle un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del valor*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int tamaño = 5;
    int vector[tamaño], mayor = NULL;
    for (int i = 0; i < tamaño; i++){
        cout<<"ingrese el valor para la posicion "<<i+1<<" : ";
        cin>>vector[i];
        if (mayor == NULL){
            mayor = vector[i]; 
        }else if (vector[i] > mayor){
            mayor = vector[i];
        }
    }
    cout<<"El numero mayor ingresado fue: "<<mayor<<endl;
    getch();
    return 0;
}