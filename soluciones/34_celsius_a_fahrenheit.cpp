//Escribir un programa que convierta un valor dado en grados Celsius a grados Fahrenheit.

#include <iostream>

using namespace std;

int main(){

    float c, f;

    cout << "Introduce la temperatura en grados Celsius: "; cin >> c;
    
    f = (9.0/5.0) * c + 32;

    cout << "La temperatura en grados Fahrenheit: " << f << endl;
    

    system("pause");
    return 0;
}