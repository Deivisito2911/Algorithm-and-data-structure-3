/*Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la funcion pow*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int x = 0, y = 0, resultado = 1;
    cout<<"indique el numero base: "<<endl;
    cin>>x;
    cout<<"Indique a que numero lo elevara: "<<endl;
    cin>>y;
    for (int i = 0; i <= y-1; i++){
        resultado*=x;
    }
    cout<<"El resultado de la potencia es: "<<resultado<<endl;
    getche();
    return 0;
}