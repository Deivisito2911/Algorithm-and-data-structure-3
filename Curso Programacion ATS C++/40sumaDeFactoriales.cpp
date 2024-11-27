/*Escriba un programa que calcule el valor de 1!+2!+2!+...+n!
(suma de factoriales)*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 0, factorial = 1, suma = 0, x = 0;
    cout<<"Ingrese el rango de la suma de factoriales: "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++){
        factorial = 1;
        x = i;
        for (int i = 1; i <= x; i++){
            factorial*=i;
        }
        suma+=factorial;
    }
    cout<<"La suma de factoriales en el rango "<<n<<" es: "<<suma;
    getche();
    return 0;
}