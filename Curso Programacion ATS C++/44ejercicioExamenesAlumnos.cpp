/*En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
a) Alumnos que aprobaron todos los examenes
b) Alumnos que aprobaron al menos un examen
c) Alumnos que aprobaron unicamente el ultimo examen

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    const int cantAlumnos = 5, cantExamenes = 3;
    const float minAprobatorio = 4.5;
    int cantAprob = 0, cantAprobUnExamen = 0, cantAprobUltExamen = 0, aprobado = 0;
    float nota = 0;
    for (int i = 0; i < cantAlumnos; i++){
        aprobado = 0;
        for (int i2 = 0; i2 < cantExamenes; i2++){
            nota = 0;
            cout<<"Indique la nota para el alumno "<<i+1<<"  Examen N° "<<i2+1<<": ";
            cin>>nota;
            if (nota >= minAprobatorio){
                aprobado++;
            }
        }
        cout<<endl;
        if (aprobado==3){
            cantAprob++;
        }
        if (aprobado >= 1){
            cantAprobUnExamen++;
        }
        if (nota >= minAprobatorio){
            cantAprobUltExamen++;
        }
    }
    cout<<"Cantidad de alumnos que aprobaron todos los examenes: "<<cantAprob<<endl;
    cout<<"Cantidad de alumnos que aprobaron al menos un examen: "<<cantAprobUnExamen<<endl;
    cout<<"Cantidad de alumnos que aprobaron el ultimo examen: "<<cantAprobUltExamen<<endl;
    getche();
    return 0;
}