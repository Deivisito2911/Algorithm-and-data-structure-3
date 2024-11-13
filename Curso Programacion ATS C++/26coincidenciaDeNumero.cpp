/*Escribe un programa que lea de la entrada estandar tres numeros. Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los
introducidos con anterioridad*/
#include <iostream>
using namespace std;

int main(){
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cout<<"Indique 3 numeros separados por espacio: "<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Indiqueme un 4to numero: "<<endl;
    cin>>n4;
    if ((n4==n1)||(n4==n2)||n4==n3){
        cout<<"El numero coincide con alguno de los anteriores ingresados"<<endl;
    }else{
        cout<<"El numero no coincide con ninguno de los anteriores ingresados"<<endl;
    }
    return 0;
}