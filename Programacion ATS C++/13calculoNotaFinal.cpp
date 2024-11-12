/*La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que ceunta el 10% restante. Escriba un programa
que lea de la entrada estandar. Las tres notas de un alumno y escriba en la
salida estandar su nota final.
*/
#include<iostream>
using namespace std;

int main(){
    float practica, teorica, participacion, final = 0;
    cout<<"Indica la nota de practica : "<<endl;
    cin>>practica;
    cout<<"Indica la nota de teorica : "<<endl;
    cin>>teorica;
    cout<<"Indica la nota de participacion : "<<endl;
    cin>>participacion;
    practica*= 0.30;
    teorica*= 0.60;
    participacion*= 0.10;
    final = practica+teorica+participacion;
    cout<<"La nota final es : "<<final<<endl;
    return 0;
}