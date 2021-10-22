//RUA que calcule los números que hay desde 1 hasta un número introducido por teclado.

#include <iostream>
using namespace std;

int main(){

    int num;
    string numeros = "";
    cout << "Introduce un numero: "; cin >> num;

    for (int i = 2; i < num; i++){
        numeros += to_string(i) + ", ";
    }

    cout << "Los numeros enteros entre 1 y " << num << " son: " << endl;
    (numeros != "") ? cout << numeros << endl : cout << "Ninguno" << endl;

    system("pause");
    return 0;
}