/*Hacer un programa que calcule el resultado de la siguiente expresion:
1-2+3-4+5-6...n*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int suma = 0, n = 0, resultado = 0;
    cout<<"Indiqueme el valor de la suma: "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i+=2){
        resultado= i-(i+1);
        suma+=resultado;
    }
    cout<<"El resultado es: "<<suma<<endl;
    getche();
    return 0;
}