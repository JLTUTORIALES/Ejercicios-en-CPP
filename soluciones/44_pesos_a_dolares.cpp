//RUA que convierta un valor dado en pesos a dólares

#include <iostream>
using namespace std;

int main(){
    float pesos;
    cout << "introduzca la cantidad en pesos: "; cin >> pesos;
    cout << pesos << " pesos son " << (pesos / 3781) << " dolares" << endl;

    system("pause");
    return 0;
}