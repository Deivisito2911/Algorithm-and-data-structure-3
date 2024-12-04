/*Pasar una palabra a mayuscula
Funcion strupr()*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char palabra[] = "deivith";
    strupr(palabra);
    cout<<palabra;
    getch();
    return 0;
}