//RUA que lea la fecha de nacimiento y de una persona y diga si es mayor de edad.
#include <ctime>
#include <iostream>
using namespace std;

int main(){

    time_t t = time(0);
    tm* now = localtime(&t);

    int dia, mes, anio, d, m, y;

    d = now->tm_mday; m = now->tm_mon + 1; y = now->tm_year + 1900;

    cout << "Por favor introduce tu dia de nacimiento: "; cin>>dia;
    cout << "Por favor introduce tu mes de nacimiento: "; cin>>mes;
    cout << "Por favor introduce tu anio de nacimiento: "; cin>>anio;

    if ((y - anio) > 18){ 
        cout << "Eres mayor de edad" <<endl;
    } else if ((y - anio) == 18){
        if (m > mes) {
            cout << "Eres mayor de edad" <<endl;
        } else if ( m == mes ){
            if (d > dia){
                cout << "Eres mayor de edad" <<endl;
            } else if (d == dia) {
                cout << "Perfecto, estas cumpliendo 18 anios" <<endl;
            } else {
                cout << "Eres menor de edad, te faltan " << (dia - d) << " dias" << endl;
            }
        } else {
            cout << "Eres menor de edad, te faltan " << (mes - d) << " meses" << endl;
        }
    } else {
        cout << "Eres menor de edad, te faltan " << (18 - (y - anio)) << " anios" <<endl;
    }

    system("pause");
    return 0;
}