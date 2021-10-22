//Escribir un programa que convierta un valor dado en grados Fahrenheit a grados Celsius.

#include <iostream>

using namespace std;

int main(){

    float c, f;

    cout << "Introduce la temperatura en grados Fahrenheit: "; cin >> f;
    
    c = (5.0/9.0) * (f - 32);

    cout << "La temperatura en grados Celsius: " << c << endl;
    

    system("pause");
    return 0;
}