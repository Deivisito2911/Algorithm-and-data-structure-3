/*Metodo por insercion
Si
    numeroizq > numeroActual
        cambio*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5};
    int i = 0, pos = 0, aux = 0;
    int tamaño = sizeof(numeros)/sizeof(numeros[0]);
    for ( i = 0; i < tamaño; i++){
        pos = i;
        aux = numeros[i];
        while ((pos>0)&&(numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }
    cout<<"Orden Ascendente: "<<endl;
    for ( i = 0; i < tamaño; i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"\nOrden Descendente: "<<endl;
    for ( i = tamaño-1; i >= 0 ; i--){
        cout<<numeros[i]<<" ";
    }
    getch();
    return 0;
}