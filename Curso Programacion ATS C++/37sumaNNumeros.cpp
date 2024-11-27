/*Escriba un programa que calcule el valor de: 1+2+3+...+n */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n = 0, suma = 0;

    cout<<"Indique el  numero de elementos: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++){
        suma+= i;
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    getche();
    return 0;
}