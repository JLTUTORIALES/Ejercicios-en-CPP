//Dados los catetos de un triángulo rectángulo, calcular su hipotenusa.

#define _USE_MATH_DEFINITIONS

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float cat1, cat2, hipo;

    cout << "Introduce un cateto del triangulo: "; cin >> cat1;
    cout << "Introduce el otro cateto del triangulo: "; cin >> cat2;
    
    hipo = sqrt(pow(cat1, 2) + pow(cat2, 2));
    
    cout << "La hipotenusa del triangulo es: " << hipo << endl;
    

    system("pause");
    return 0;
}