/*Escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo y escriba en la salida estandar su hipotenusa
*/
#include <iostream>
#include <cmath>//Operaciones matematicas
using namespace std;

int main(){
    float catOpuesto, catAdyacente, hipotenusa= 0;
    cout<<"Indica el valor del cateto opuesto :"<<endl;
    cin>>catOpuesto;
    cout<<"Indica el valor del cateto adyacente :"<<endl;
    cin>>catAdyacente;
    hipotenusa = sqrt(pow(catOpuesto,2)+pow(catAdyacente,2));
    cout<<"La hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}