//1. Escribe la siguiente expresioón como expresión en C++ a/b + 1

#include<iostream>
#include <conio.h>

using namespace std;

int main(){
    float a = 0, b = 0, resultado = 0;

    cout<<"Indicame el valor de a: "<<endl;
    cin>>a;
    cout<<"Indicame el valor de b: "<<endl;
    cin>>b;
    resultado = (a/b) + 1;
    cout.precision(2);//redondear a menos decimales
    cout<<"El resultado es : "<<resultado;
    getch();
    return 0;
}