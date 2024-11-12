/*Escribe un programa que lea de la entrada estandar el precio de un
producto y muestre en la salida estandar el precio del producto al
aplicarle el IVA */
#include <iostream>

using namespace std;

int main(){
    int porcentajeIVA = 16;
    float IVA = (porcentajeIVA/100.0), precioProducto = 0;
    string nombreProducto = " ";
    cout<<"Indique el nombre del producto : "<<endl;
    cin>>nombreProducto;
    cout<<"\nIndique le precio del producto : "<<endl;
    cin>>precioProducto;
    cout<<"El precio de ["<<nombreProducto<<"] es : "<<(precioProducto+(precioProducto*IVA));
    return 0;
}