/*Realice un programa que solicitew al ususario que piense un numero entero
entre el 1 y el 100. EL programa debe generar un numero aleatorio en ese mismo
rango [1-100], e indicarle al usuario si el numero que digito es menor o mayor
al numero aleatorio, asi hgasta que lo adivine,. y por ultimo mostrarle el numro
de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior))*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int numero = 0, dato = 0, contador = 0;
    srand(time(NULL)); //generar numero aleatorio;
    dato = 1 + rand()% (100);
    do{
        cout<<"Indique el numero: ";
        cin>>numero;
        if (numero>dato){
            cout<<"El  numero es mayor"<<endl;
        }else if(numero<dato){
            cout<<"El numero es menor"<<endl;
        }else{
            cout<<"El numero es igual"<<endl;
        }
        contador++;
    } while (numero != dato);
    cout<<"Le tomo "<<contador<<" intentos"<<endl;
    getche();
    return 0;
}