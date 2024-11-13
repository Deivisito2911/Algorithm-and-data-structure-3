/*Escriba un programa que lea dos numeros y determine cual de ellos es 
el mayor*/
#include <iostream>
using namespace std;

int main(){
    float a = 0, b = 0;
    cout<<"Introduzca dos numeros: "<<endl;
    cin>>a>>b;
    if (a>b){
        cout<<"El numero mayor es: "<<a<<endl;
    }else if (a<b){
        cout<<"El numero mayor es: "<<b<<endl;
        }else{
            cout<<"Los numeros son iguales, numero "<<a<<endl;
        }
    return 0;
}