//Escriba un fragmento de programa que intercambie los valores de dos variables

#include <iostream>
using namespace std;

int main(){
    float a = 0, b = 0, aux = 0;
    cout<<"Indica el valor de a: "<<endl;
    cin>>a;
    cout<<"Indica el valor de b: "<<endl;
    cin>>b;
    aux = a;
    a = b;
    b = aux;
    cout<<"Valor actual de a: "<<a<<endl;
    cout<<"Valor actual de b: "<<b<<endl;

    return 0;
}