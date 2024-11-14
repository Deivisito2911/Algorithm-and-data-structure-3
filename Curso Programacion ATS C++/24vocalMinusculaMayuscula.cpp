/*Escriba un pograma que lea de la entrada estandar un caracter e indique 
en la salida estandar si el caracter es una vocal minuscula, es una vocal
mayuscula o no es una vocal*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char letra = ' ';
    cout<<"Indique una letra: "<<endl;
    cin>>letra;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"<<endl;
        break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayuscula"<<endl;
        break;
        default: cout<<"No es una vocal"<<endl;
    }
    getch();
    return 0;
}