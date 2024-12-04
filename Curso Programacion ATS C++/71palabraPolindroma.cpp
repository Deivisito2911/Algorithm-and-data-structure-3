/*Hacer un programa que detemrine si una palabra es polindroma*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char palabra[100],palabraAux[100];
    cout<<"Introduzca la palabra: ";cin>>palabra;
    strcpy(palabraAux,palabra);
    if (!strcmp(palabraAux,strrev(palabra))){
        cout<<"La palabra es polindroma";
    }else{
        cout<<"La palabra no es polindroma";
    }
    getch();
    return 0;
}