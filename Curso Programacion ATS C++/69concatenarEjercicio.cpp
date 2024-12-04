/*Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra
cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de
la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)" */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char cadena[] = "Hola que tal ", nombreUsuario[100];
    cout<<"Indiqueme su nombre: ";cin>>nombreUsuario;
    strcat(cadena,nombreUsuario);
    cout<<cadena;
    getch();
    return 0;
}