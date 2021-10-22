/*RUA que tras leer una medida expresada en centímetros la convierta en pulgadas 1
pulgada=2.54 cm.*/

#include <iostream>
using namespace std;

int main(){

    float cm;

    cout << "Por favor introduce la los centimetros: "; cin >> cm;
    cout << cm << "cm es equivalente a " << (cm / 2.54) << " pulgadas" << endl;
    
    system("pause");
    return 0;

}