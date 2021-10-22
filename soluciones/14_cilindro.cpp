/*14. RUA que permita determinar el área y el volumen de un cilindro dado su radio (R) y su
altura (H)*/
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double r, h;

    cout << "Por favor introduce el radio del cilindro: "; cin >> r;
    cout << "Por favor introduce la altura del cilindro: "; cin >> h;

    cout << "El volumen del cilindro es: " << (pow(r, 2) * M_PI * h) <<endl;
    cout << "El area del cilindro es: " << ( (2 * M_PI * r * h) + (2 * M_PI * pow(r, 2)) ) << endl;

    system("pause");
    return 0;
}