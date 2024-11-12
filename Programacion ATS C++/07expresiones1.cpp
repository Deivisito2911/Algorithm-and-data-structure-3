//1. Escribe la siguiente expresioón como expresión en C++ a/b + 1

#include<iostream>

using namespace std;

int main(){
    float a, b, resultado = 0;

    cout<<"Indicame el valor de a: "<<endl;
    cin>>a;
    cout<<"Indicame el valor de b: "<<endl;
    cin>>b;
    resultado = (a/b) + 1;
    cout.precision(2);//redondear a menos decimales
    cout<<"El resultado es : "<<resultado;
    return 0;
}