//Escribe la siguiente expresion matematica como expresion en C++ a+b/c+d
#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"Indiqueme el valor de a: "<<endl;
    cin>>a;
    cout<<"Indiqueme el valor de b: "<<endl;
    cin>>b;
    cout<<"Indiqueme el valor de c: "<<endl;
    cin>>c;
    cout<<"Indiqueme el valor de d: "<<endl;
    cin>>d;
    resultado = ((a+b)/(c+d));
    cout<<"El resultado es: "<<resultado;
    return 0;
}