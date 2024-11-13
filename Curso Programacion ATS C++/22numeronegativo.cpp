//Comprobar si un numero digitado por el usuario es positivo o negativo
#include <iostream>
using namespace std;

int main(){
    float numero = 0;
    cout<<"Ingrese un numero: "<<endl;
    cin>> numero;
    if (numero == 0){
        cout<<"El numero es 0"<<endl;
    }else if ((numero*-1)>0){
        cout<<"El numero es negativo"<<endl;
        }else{
            cout<<"El numero es positivo"<<endl;
        }
    return 0;
}