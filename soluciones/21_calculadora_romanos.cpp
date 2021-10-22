//RUA que lea un número del 1 al 10 y diga cuál es su número en romano.

#include <iostream>
using namespace std;

string get_romano(int numero){

    string romano = "";
    int restante = numero;
    while (restante > 0){
        if      (restante >= 1000){ romano += "M"; restante -= 1000; }
        else if (restante >= 900) { romano += "CM"; restante -= 900; }
        else if (restante >= 500) { romano += "D";  restante -= 500; }
        else if (restante >= 400) { romano += "CD"; restante -= 400; }
        else if (restante >= 100) { romano += "C";  restante -= 100; }
        else if (restante >= 90)  { romano += "XC"; restante -= 90; }
        else if (restante >= 50)  { romano += "L";  restante -= 50; }
        else if (restante >= 40)  { romano += "XL"; restante -= 40; }
        else if (restante >= 10)  { romano += "X";  restante -= 10; }
        else if (restante >= 9)   { romano += "IX"; restante -= 9; }
        else if (restante >= 5)   { romano += "V";  restante -= 5; }
        else if (restante >= 4)   { romano += "IV"; restante -= 4; }
        else if (restante >= 1)   { romano += "I";  restante -= 1; }
    }

    return romano;
}

int main(){

    int numero;

    cout << "Por favor introduce un numero: "; cin >> numero;
    
    string romano = get_romano(numero);

    cout << "El numero " << numero << " equivale a " << romano << endl;
    system("pause");

    return 0;

}