/*Realice un programa que calcule el valor que toma la siguiente funcion para
unos valores dados de x e y (f(x,y) = sqrt(x)/y^2-1)*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x, y, resultado = 0;
    cout<<"Introduzca el valor de x: "<<endl;
    cin>>x;
    cout<<"Introduzca el valor de y: "<<endl;
    cin>>y;
    resultado = (sqrt(x))/(pow(y,2)-1);
    cout<<"El resultado de la funcion es: "<<resultado<<endl;
    return 0;
}