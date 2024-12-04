/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo
su contenido hasta otro arreglo de caracteres*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char cadena[100], cadena2[100];
    cout<<"Ingrese una palabra : ";cin>>cadena;
    strcpy(cadena2,cadena);
    cout<<"La palabra que ingreso fue: "<<cadena2<<endl;
    getch();
    return 0;
}