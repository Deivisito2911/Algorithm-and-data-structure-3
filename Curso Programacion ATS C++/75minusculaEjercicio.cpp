/*Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A,
convertir su nombre a minusculas, caso contrario no convertirlo*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char nombre[100];
    cout<<"Ingrese su nombre en mayusculas: ";cin>>nombre;
    if (nombre[0] == 'A'){
        cout<<"Nombre convertido a minusculas: "<<strlwr(nombre)<<endl;
    }else{
        cout<<"Nombre no convertido a minusculas: "<<nombre<<endl;
    }
    getch();
    return 0;
}