/*Escriba un programa que solicite una edad(un entero) e indique en la
salida estandar si la edad introducida esta en el rango [18-25] */

#include<iostream>
#include <conio.h>
using namespace std;

int main(){
    int edad = 0;

    cout<<"Indiqueme su edad: "<<endl;
    cin>>edad;
    if ((edad>=18)&&(edad<=25)){
        cout<<"Su edad esta en el rango de 18-25"<<endl;
    }else{
        cout<<"Su edad no esta en el rango de 18-25"<<endl;
    }
    getch();
    return 0;
}