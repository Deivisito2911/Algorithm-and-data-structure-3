#include <iostream>
#include <conio.h>
using namespace std;
//operadores de condicionales ==, !=, >=, <=, <, >
int main(){
    int numero = 0, dato = 5;
    cout<<"Indique un numero: "<<endl;
    cin>>numero;
    if (numero!=dato){
        cout<<"El numero es diferente de 5";
    }else{
        cout<<"El numero es cinco";
    }
    getch();
    return 0;
}