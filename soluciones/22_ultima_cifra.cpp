//RUA que obtenga la última cifra de un número introducido

#include <iostream>
using namespace std;

int main(){

    int _num;
    string num;

    cout << "Por favor introduce un numero: "; cin >> _num;
    num = to_string(_num);

    cout << "El ultimo digito es: " << num[num.length() - 1] << endl;
    
    system("pause");
    return 0;

}