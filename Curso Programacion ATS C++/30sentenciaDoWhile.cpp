/*La sentencia do while
    do{
        conjunto de instrucciones;
    }while(expresion logica)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int i = 0;

    i = 1;

    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
    system("pause");
    return 0;
}