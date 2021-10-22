//RUA que lea un valor dado en libras y convertirlos a kilogramos .

#include <iostream>
using namespace std;

int main(){

    float libras, kilos;
    cout << "Introduce la cantidad en libras: "; cin >> libras;

    kilos = libras / 1000;
    cout << libras << " libras son equivalentes a " << kilos << "Kg" << endl;


    system("pause");
    return 0;
}