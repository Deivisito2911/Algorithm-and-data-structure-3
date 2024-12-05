/*Metodo burbuja
    Si
        numeroActual>numeroSiguiente
            Cambio*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[] = {9,4,18,21,3,1,38,5};
    int aux = 0;
    int tamaño = sizeof(numeros)/sizeof(numeros[0]);
    for (int i = 0; i < tamaño; i++){
        for (int i2 = 0; i2 < tamaño-1; i2++){
            if (numeros[i2] > numeros[i2+1]){
                aux = numeros[i2];
                numeros[i2] = numeros[i2+1];
                numeros[i2+1] = aux;
            }
        }
    }
    
    cout<<"Orden ascendente: "<<endl;
    for ( int i = 0; i < tamaño; i++){
        cout<<numeros[i]<<endl;
    }
    cout<<"Orden descendente: "<<endl;
    for ( int i = tamaño-1; i >= 0; i--){
        cout<<numeros[i]<<endl;
    }
    getch();
    return 0;
}