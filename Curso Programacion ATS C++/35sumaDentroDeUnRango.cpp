/*Escriba un programa que lea valores enteros hgasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. EL programa debe
entregar la suma de los valores mayores a 0 introducidos*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero = 1, suma = 0;
    do{
        cout<<"Indiqueme un numero: "<<endl;
        cin>>numero;
        if (numero>0){
            suma+=numero;
        }
    } while (!(((numero>=20)&&(numero<=30))||numero==0));
    cout<<"La suma de todos los valores es: "<<suma<<endl;
    getche();
    return 0;
}