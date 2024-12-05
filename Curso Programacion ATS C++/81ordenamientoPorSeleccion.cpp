/*Ordenamiento por seleccion
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[] = {3,2,1,5,4};
    int i = 0, j = 0, aux = 0, min = 0, tamaño = sizeof(numeros)/sizeof(numeros[0]);

    for ( i = 0; i < tamaño; i++){
        min = i;
        for ( j = i+1; j < tamaño; j++){
            if (numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] =aux;
    }
    cout<<"Orden Ascendente: "<<endl;
    for ( i = 0; i < tamaño; i++){
        cout<<numeros[i]<<endl;
    }
    cout<<"\nOrden Descendente: "<<endl;
    for ( i = tamaño-1; i >= 0 ; i--){
        cout<<numeros[i]<<" ";
    }
    getch();
    return 0;
}