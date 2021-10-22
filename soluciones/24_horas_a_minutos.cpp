//RUA que exprese las horas, minutos y segundos un tiempo expresado en minutos

#include <iostream>
using namespace std;

int main(){

    int h, m, s, result;

    cout << "Por favor introduce las horas: "; cin >> h;
    cout << "Por favor introduce los minutos: "; cin >> m;
    cout << "Por favor introduce los segundos: "; cin >> s;

    result = (h * 60) + m + (s / 60);

    cout << h << ":" << m << ":" << s << " = " << result << " minutos" << endl;

    
    system("pause");
    return 0;

}