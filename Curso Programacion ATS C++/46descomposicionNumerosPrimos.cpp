/*Realice un programa que calcule la descomposicion en factores primos de
un numero entero
Ejemplo: 20 = 2*2*5 */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero = 0;
    cout<<"Indique el numero a descomponer: ";
    cin>>numero;
    cout<<"Descomposicion en factores primos : ";
    for (int i = 2; numero> 1; i++){
        while (numero%i == 0){
            cout<<i<<" ";
            numero /= i;
        }
    }
    cout<<endl;
    getche();
    return 0;
}