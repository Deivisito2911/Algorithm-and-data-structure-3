/*Escriba un programa que calcule el valor de: 1+3+5+...+2n-1*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 0, suma = 0;
    cout<<"Indique la cantidad de elementos: "<<endl;
    cin>>n;
    for (int i = 1; i <= 2*n-1; i+=2){
        suma+= i;
    }
    cout<<"El resultado es: "<<suma<<endl;
    getche();
    return 0;
}