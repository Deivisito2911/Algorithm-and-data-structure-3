/*invertir una cadena
strrev()*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char cadena[100];
    cout<<"Indiqueme la palabra que invertira: ";cin>>cadena;
    cout<<"La palabra invertida es: "<<strrev(cadena);
    getch();
    return 0;
}