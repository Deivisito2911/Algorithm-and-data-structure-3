/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en
pantalla, caso contrario no mostrarla*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char palabra[100];
    cout<<"Ingrese una palabra: ";cin>>palabra;
    if (strlen(palabra)>10){
        cout<<"Usted ingreso: "<<palabra<<endl;
    }else{
        cout<<"Su palabra no excede los 10 caracteres";
    }
    getch();
    return 0;
}