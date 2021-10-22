//RUA que calcule el volumen de una esfera dado su radio.

#define _USE_MATH_DEFINITIONS

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float radio;

    cout << "Introduce el radio de la esfera: "; cin >> radio;
    cout << "El volumen de la esfera es: " << ((4.0/3.0) * M_PI * pow(radio, 3)) << endl;
    

    system("pause");
    return 0;
}