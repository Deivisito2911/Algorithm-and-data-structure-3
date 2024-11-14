/*Hacer un programa que simule un cajero automatico con un saldo inicial
de 1000 dolares*/
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main(){
    const int saldo_inicial = 1000;
    float saldo = saldo_inicial, aux = 0;
    int opc = 0;
    do{
        cout<<"\t Bienvenido a Banco de Venezuela"<<endl;
        cout<<"1. Ingresar dinero en cuenta"<<endl;
        cout<<"2. Retirar dinero en cuenta"<<endl;
        cout<<"3. Consultar dinero de cuenta"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;
        system("cls");
        switch (opc){
        case 1:
            cout<<"Indique el monto que ingresara a su cuenta: "<<endl;
            cin>>aux;
            saldo+=aux;
            cout<<"Su nuevo saldo es ["<<saldo<<"]"<<endl;
            break;
        case 2:
            cout<<"Indique el monto que retirara: "<<endl;
            cin>>aux;
            if (aux>saldo){
                cout<<"El saldo que desea retirar es mayor al disponible en la cuenta"<<endl;
            }else{
                saldo-=aux;
                cout<<"Su nuevo saldo es ["<<saldo<<"]"<<endl;
            }
            break;
        case 3:
            cout<<"Su saldo es ["<<saldo<<"]"<<endl;
            break;
        case 4:
            cout<<"Hasta la proxima. Banco de Venezuela siempre a su servicio"<<endl;
            break;
        default:
            cout<<"Opcion incorrecta"<<endl;
            break;
        }
        system("pause");
        system("cls");
    } while (opc != 4);
    getch();
    return 0;
}