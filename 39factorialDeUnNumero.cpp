/*Escriba un programa que calcule el valor de 1*2*3...*n(facotrial)*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 0, factorial = 1;

    cout<<"Ingrese el numero del que desea el factorial: "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++){
        factorial*=i;
    }
    cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;
    getche();
    return 0;
}