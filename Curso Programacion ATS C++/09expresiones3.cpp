//3. Escribe la siguiente expresion como expresion en c++ a+b/c / d+e/f

#include <iostream>
using namespace std;

int main(){
    float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, resultado = 0;
    cout<<"Introduce el valor de a: "<<endl;
    cin>>a;
    cout<<"Introduce el valor de b: "<<endl;
    cin>>b;
    cout<<"Introduce el valor de c: "<<endl;
    cin>>c;
    cout<<"Introduce el valor de d: "<<endl;
    cin>>d;
    cout<<"Introduce el valor de e: "<<endl;
    cin>>e;
    cout<<"Introduce el valor de f: "<<endl;
    cin>>f;
    resultado = ((a+(b/c))/(d+(e/f)));
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}