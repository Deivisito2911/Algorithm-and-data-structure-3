/*Escriba un programa que calcule las soluciones de una ecuacion de segundo
grado de la forma ax^2+bx+c =0 teniendo en cuenta:
x= (-b +- sqrt(b^2-4ac))/(2a)*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, resultado1, resultado2, discriminante = 0;
    cout<<"Indique el valor de a: "<<endl;
    cin>>a;
    cout<<"Indique el valor de b: "<<endl;
    cin>>b;
    cout<<"Indique el valor de c: "<<endl;
    cin>>c;
    if (a == 0){
        cout<<"No es una ecuacion de segundo grado";
    }else{
        discriminante = pow(b,2)-4*a*c;
        if (discriminante>=0){
            resultado1 = (-b+sqrt(discriminante))/(2*a);
            resultado2 = (-b-sqrt(discriminante))/(2*a);
            cout<<"El resultado 1 [-b+] es: "<<resultado1<<endl;
            cout<<"El resultado 2 [-b-] es: "<<resultado2<<endl;
        }else{
            cout<<"La ecuacion no tiene soluciones reales"<<endl;
        }
    }
    return 0;
}