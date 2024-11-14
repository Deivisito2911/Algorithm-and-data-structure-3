/*1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
en las salida estandar su suma, resta, multiplicacion y division */
#include<iostream>
#include <conio.h>
using namespace std;

int main(){
    int number1 = 0, number2 = 0;
    cout<<"Ingrese el primer numero : "<<endl;
    cin>>number1;
    cout<<"\nIngrese el segundo numero numero : "<<endl;
    cin>>number2;
    cout<<"\nLa suma es : "<<(number1+number2);
    cout<<"\nLa resta es : "<<(number1-number2);
    cout<<"\nLa multiplicacion es : "<<(number1*number2);
    cout<<"\nLa division es : "<<(number1/number2);
    getch();
    return 0;
}