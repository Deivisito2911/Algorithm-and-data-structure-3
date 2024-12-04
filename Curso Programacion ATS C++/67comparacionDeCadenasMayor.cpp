/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char cadenaA[100], cadenaB[100];
    cout<<"ingrese la palabra A: ";cin>>cadenaA;
    cout<<"ingrese la palabra B: ";cin>>cadenaB;
    if (!strcmp(cadenaA,cadenaB)){
        cout<<"Las palabras son iguales";
    }else{
        if (strcmp(cadenaA,cadenaB)>0){
            cout<<"La palabra "<<cadenaA<<" es mayor alfabeticamente que la palabra "<<cadenaB<<endl;
        }else{
            cout<<"La palabra "<<cadenaB<<" es mayor alfabeticamente que la palabra "<<cadenaA<<endl;
        }
    }
    getch();
    return 0;
}