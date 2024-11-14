/*Escriba un programa que lea tres numeros y determine cual de ellos
es el mayor*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float n1 = 0, n2 = 0, n3 = 0, mayor = 0;
    cout<<"Ingrese 3 numeros, cada uno seguido de un espacio"<<endl;
    cin>>n1>>n2>>n3;
    mayor = n1;
    if (n1>n2){
        mayor = n1;
    }
    if (n2>mayor){
        mayor = n2;
    }
    if (n3>mayor){
        mayor = n3;
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    getch();
    return 0;
}