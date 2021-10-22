//RUA que imprima el mayor y el menor de una serie de 5 números ingresados por teclado

#include <iostream>
using namespace std;

int main(){

    int minvalue = 99999;

    for (int i = 0; i < 5; i++){
        int num;

        cout << "Por favor introduce un numero: "; cin>>num;
        if (num < minvalue){ minvalue = num; }

    }

    cout << "El menor de los numeros ingresados es: " << minvalue << endl;

    system("pause");
    return 0;

}