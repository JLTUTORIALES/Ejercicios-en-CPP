//RUA que calcule el perímetro y área de un círculo dado su radio.

#define _USE_MATH_DEFINITIONS

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float radio;

    cout << "Introduce el radio del circulo: "; cin >> radio;
    cout << "El perimetro del circulo es: \t" << (2 * M_PI * radio) << endl;
    cout << "El area del circulo es: \t" << (M_PI * pow(radio, 2)) << endl;
    

    system("pause");
    return 0;
}