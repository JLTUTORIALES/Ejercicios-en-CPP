//RUA que lea 10 números e imprima solamente los positivos

#include <iostream>

using namespace std;

int main(){
    
    int num[10];
    string positivos = "";

    for (int i = 0; i < 10; i++){
        cout << "Introduce el numero (" << (i + 1) << "/10): "; cin >> num[i];
    }

    for (int i = 0; i < 10; i++){
        if (num[i] > 0){ positivos += to_string(num[i]) + " "; }
    }

    cout << "\nLos numeros positivos son: " << endl;
    cout << positivos << endl;

    
    system("pause");
    return 0;
}