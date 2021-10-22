/*RUA que lea la velocidad de un vehículo expresado en Km por hora y proporcione la
velocidad en metros por segundos.*/

#include <iostream>
using namespace std;

int main(){

    double kmh;
    cout << "Por favor introduce la velocidad en Km/h: "; cin >> kmh;
    cout << kmh << "Km/h en metros por segundo es " << (kmh / 3.6) << "m/s"<<endl;

    system("pause");
    return 0;
}