//Escribe la siguiente expresion matematica como expresion en C++ a+b/c+d
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float a = 0, b = 0, c = 0, d = 0, resultado = 0;

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
    getch();
    return 0;
}