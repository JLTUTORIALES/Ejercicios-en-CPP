//RUA que convierta un valor dado en dólares a pesos

#include <iostream>
using namespace std;

int main(){
    float dolares;
    cout << "introduzca la cantidad en dolares: "; cin >> dolares;
    cout << dolares << " dolares son " << (dolares * 3781) << " pesos" << endl;

    system("pause");
    return 0;
}