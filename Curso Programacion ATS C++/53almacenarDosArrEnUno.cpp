/*Realiza un programa que defina dos vectores de caracteres y despues alamacene el
contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estandar*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char vectorA[] ={'a','b','c','d','e'}, vectorB[] = {'f','g','h','i','j'};
    int tamañoResultante = (sizeof(vectorA)/sizeof(vectorA[0]))+(sizeof(vectorB)/sizeof(vectorB[0]));
    char vectorResultante[tamañoResultante];
    for (int i = 0; i < int (sizeof(vectorA)/sizeof(vectorA[0])); i++){
        vectorResultante[i] = vectorA[i];
    }
    for (int i = 0; i < int (sizeof(vectorB)/sizeof(vectorB[0])); i++){
        vectorResultante[i+(sizeof(vectorA)/sizeof(vectorA[0]))] = vectorB[i];
    }
    for (int i = 0; i < tamañoResultante; i++){
        cout<<"Posicion: "<<i<<" valor: "<<vectorResultante[i]<<endl;
    }
    getch();
    return 0;
}