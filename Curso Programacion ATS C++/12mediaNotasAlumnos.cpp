/*Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de 
los cuatro alumnos.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float nota = 0, acumulador = 0;
    const int cantAlumnos = 4;
    for (int i = 0; i < cantAlumnos; i++){
        cout<<"Introduzca la nota del alumno "<<i+1<<":"<<endl;
        cin>>nota;
        acumulador+=nota;
    }
    cout<<"EL promedio o media de las notas finales es: "<<acumulador/cantAlumnos<<endl;
    getch();
    return 0;
}