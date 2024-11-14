/*Realice un programa que solicite de la entrada estandar un entero del 1 al
10 y muestre en la salida estandar su tabla de multiplicar */
#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero = 0;
    do{
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;
        if ((numero < 1)||(numero>10)){
                cout<<"No es un numero del 1 al 10"<<endl;
            }
    }while((numero<1)||(numero>10));

    for (int i = 0; i <= 10; i++){
        cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
    }
    getch();
    return 0;
}