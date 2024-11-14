/*Realice un programa que lea de la entrada estandar numeros hasta que se
introduzca un c ero. En ese momento el programa debe terminar y mostrar en la
salida estandar el numero de valores mayores que cero leidos*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero = 0, contador = 0;
    do{
        cout<<"Introduzca un numero: "<<endl;
        cin>>numero;
        if (numero > 0){
            contador+=1;
        }
    } while (numero !=0);
    cout<<"Se introducieron "<<contador<<" mayores a 0";

    getch();
    return 0;
}