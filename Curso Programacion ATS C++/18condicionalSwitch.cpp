#include <iostream>
using namespace std;

int main(){
    int numero=0;
    cout<<"Digite un numero entre 1-5: "<<endl;
    cin>>numero;
    switch (numero){
    case 1:
        cout<<"El numero es 1"<<endl;
        break;
    case 2:
        cout<<"El numero es 2"<<endl;
        break;
    case 3:
        cout<<"El numero es 3"<<endl;
        break;
    case 4:
        cout<<"El numero es 4"<<endl;
        break;
    case 5:
        cout<<"El numero es 5"<<endl;
        break;
    default:
        cout<<"El numero no esta en el intervalo"<<endl;
        break;
    }
    return 0;
}