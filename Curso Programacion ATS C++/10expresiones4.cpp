//Escriba la siguiente expresion como expresion en c++ a+ b/c-d

#include <iostream>
using namespace std;

int main(){
    float a = 0, b = 0, c = 0, d = 0, resultado = 0;
    cout<<"Introduzca el valor de a: "<<endl;
    cin>>a;
    cout<<"Introduzca el valor de b: "<<endl;
    cin>>b;
    cout<<"Introduzca el valor de c: "<<endl;
    cin>>c;
    cout<<"Introduzca el valor de d: "<<endl;
    cin>>d;
    resultado = (a+(b/(c-d)));
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}