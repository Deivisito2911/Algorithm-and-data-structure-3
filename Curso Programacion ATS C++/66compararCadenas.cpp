/*Comparar cadenas
Funcion strcmp()
0 si es igual
1 si no es
compara que palabra es mayor*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "Isla";

    if (!strcmp(palabra1,palabra2)){
        cout<<"Ambas cadenas son iguales"<<endl;
    }else{
        cout<<"Las cadenas son diferentes"<<endl;
    }
    if (strcmp(palabra1,palabra2) > 0){
        cout<<palabra1<<" esta despues alfabeticamente que "<<palabra2<<endl;
    }else{
        cout<<palabra2<<" esta despues alfabeticamente que "<<palabra1<<endl;
    }
    
    getch();
    return 0;
}