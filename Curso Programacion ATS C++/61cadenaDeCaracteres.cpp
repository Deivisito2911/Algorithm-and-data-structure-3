//Cadena de caracteres
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Karen";
    char palabra2[] = {'K','a','r','e','n'};
    char nombre[30];
    cout<<"Indiqueme su nombre: ";
    //cin>>nombre;//guarda hasta encontrar un espacio
    //gets(nombre);//guarda incluyendo los espacios y lo que le sigue, pero excede el limite
    cin.getline(nombre,30,'\n');//variable,elementos,finalizacion
    cout<<nombre<<endl;
    cout<<palabra2<<endl;
    cout<<palabra<<endl;

    getch();
    return 0;
}