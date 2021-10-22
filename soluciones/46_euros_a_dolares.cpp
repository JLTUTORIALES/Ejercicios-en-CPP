//RUA que calcule un valor dado en euros a dólares

#include <iostream>
using namespace std;

int main(){
    float euros;
    cout << "Introduzca la cantidad en euros: "; cin >> euros;
    cout << euros << " euros son " << (euros * 1.16) << " dolares" << endl;

    system("pause");
    return 0;
}