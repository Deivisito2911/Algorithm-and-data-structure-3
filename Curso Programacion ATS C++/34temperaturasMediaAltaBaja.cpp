/*Escriba un programa que tome cada 4 horas la temperatura exterios,
leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del dia, la tempratura mas alta y la mas baja*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int cantTemperaturas = 6;
    float temperatura = 0, tempAlta = NULL, tempBaja = NULL, tempMedia = 0, acum = 0;
    int contador = 0, Hora = 0;

    for (int i = 0; i <= cantTemperaturas-1; i++){
        Hora+=4;
        cout<<"Ingrese la temperatura de las "<<Hora<<":00 : "<<endl;
        cin>>temperatura;

        contador++;
        acum+= temperatura;

        if (tempAlta == NULL){
            tempAlta = temperatura;
            tempBaja = temperatura;
        }
        if (tempAlta < temperatura){
            tempAlta = temperatura;
        }
        if (tempBaja > temperatura){
            tempBaja = temperatura;
        }
    }
    tempMedia = acum/contador;
    cout<<"Temperatura mas alta registrada: "<<tempAlta<<endl;
    cout<<"Temperatura mas baja registrada: "<<tempBaja<<endl;
    cout<<"Temperatura media: "<<tempMedia<<endl;
    return 0;
}