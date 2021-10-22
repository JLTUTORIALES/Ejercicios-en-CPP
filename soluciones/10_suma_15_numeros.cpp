//RUA que sume 15 números cualesquiera y sume su resultado.

#include <iostream>
using namespace std;

int main(){

    float resultado = 0;
    for (int i = 0; i < 15; i++){
        float num;
        cout << "Numero ("<< (i+1) << "/15): "; cin>>num;
        resultado += num;
    }

    cout << "El resultado es: "<<resultado<<endl;

    system("pause");    
    return 0;
}