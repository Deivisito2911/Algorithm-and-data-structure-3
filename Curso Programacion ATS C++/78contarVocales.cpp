/*Realice un programa que lea una cadena de caracteres de la entrada estandar y 
muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[100];
    int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0;

    cout<<"Indiqueme una frase: ";gets(palabra);
    strlwr(palabra);
    for (int i = 0; i < 100; i++){
        switch (palabra[i]){
        case 'a':
            vocalA++;
            break;
        case 'e':
            vocalE++;
            break;
        case 'i':
            vocalI++;
            break;
        case 'o':
            vocalO++;
            break;
        case 'u':
            vocalU++;
            break;
        default:
            break;
        }
    }
    cout<<"Vocal a: "<<vocalA<<endl;
    cout<<"Vocal e: "<<vocalE<<endl;
    cout<<"Vocal i: "<<vocalI<<endl;
    cout<<"Vocal o: "<<vocalO<<endl;
    cout<<"Vocal u: "<<vocalU<<endl;
    getch();
    return 0;
}