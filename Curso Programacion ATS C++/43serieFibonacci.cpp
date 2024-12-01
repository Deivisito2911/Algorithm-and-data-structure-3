/*Hacer un programa que realice la serie de fibonacci -> 1 1 2 3 5 8 13... n*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 0, x = 0, y = 1, z = 1;
    cout<<"Indicame el rango de la serie : "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++){
        z = x + y;// 1 2 3 5
        cout<<z<<" ";//1 2 3 5
        x = y;//1 1 2
        y = z;//1 2 3
    }
    getche();
    return 0;
}
