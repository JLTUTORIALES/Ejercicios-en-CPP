//RUA que dado el mes, el día muestre el signo del zodiacal.

#include <iostream>
using namespace std;

int main(){

    int dia, mes;
    string signo;
    cout << "Por favor introduce tu dia de nacimiento: "; cin >> dia;
    cout << "Por favor introduce tu mes de nacimiento: "; cin >> mes;

    if (mes == 1 && dia <= 20){ signo = "Capricorio"; }
    else if (mes == 1 && dia > 20){ signo = "Acuario"; }
    else if (mes == 2 && dia <= 18){ signo = "Acuario"; }
    else if (mes == 2 && dia > 18){ signo = "Piscis"; }
    else if (mes == 3 && dia <= 20){ signo = "Piscis"; }
    else if (mes == 3 && dia > 20){ signo = "Aries"; }
    else if (mes == 4 && dia <= 21) { signo = "Aries"; }
    else if (mes == 4 && dia > 21) { signo = "Tauro"; }
    else if (mes == 5 && dia <= 20){ signo = "Tauro"; }
    else if (mes == 5 && dia > 20){ signo = "Geminis"; }
    else if (mes == 6 && dia <= 21){ signo = "Geminis"; }
    else if (mes == 6 && dia > 21){ signo = "Cancer"; }
    else if (mes == 7 && dia <= 22){ signo = "Cancer"; }
    else if (mes == 7 && dia > 22) { signo = "Leo"; }
    else if (mes == 8 && dia <= 22) { signo = "Leo"; }
    else if (mes == 8 && dia > 22 ) { signo = "Virgo"; }
    else if (mes == 9 && dia <= 22) { signo = "Virgo"; }
    else if (mes == 9 && dia > 22) { signo = "Libra"; }
    else if (mes == 10 && dia <= 22) { signo = "Libra"; }
    else if (mes == 10 && dia > 22) { signo = "Escorpio"; }
    else if (mes == 11 && dia <= 22) { signo = "Escorpio"; }
    else if (mes == 12 && dia <= 22) { signo = "Sagitario"; }
    else if (mes == 12 && dia > 22) { signo = "Capricornio"; }
    else { signo = "NO VALIDO"; }

    cout << "Tu signo sodiacal es: " << signo << endl;

    system("pause");
    return 0;
}