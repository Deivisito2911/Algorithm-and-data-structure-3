/*Convertir dos cadena de minusculas a mayusculas. Compararlas, y decir si son
iguales o no*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cadenaA[100],cadenaB[100];
    cout<<"Introduzca la palabra A: ";cin>>cadenaA;
    cout<<"Introduzca la palabra B: ";cin>>cadenaB;
    strupr(cadenaA);
    strupr(cadenaB);
    if (!strcmp(cadenaA,cadenaB)){
        cout<<"Las palabras A: "<<cadenaA<<" B: "<<cadenaB<<" son iguales"<<endl;
    }else{
        cout<<"Las palabras A: "<<cadenaA<<" B: "<<cadenaB<<" no son iguales"<<endl;
    }
    getch();
    return 0;
}