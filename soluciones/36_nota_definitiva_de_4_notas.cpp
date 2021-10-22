/*RUA que lea 4 notas donde la primera nota equivale al 20%, la segunda al 20%, la tercera
al 10% y la cuarta al 50% la nota va de (1 a 5)y calcule la nota final o definitiva.*/

#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, nota4, resultado;

    cout << "Introduce la nota 1: "; cin >> nota1;
    cout << "Introduce la nota 2: "; cin >> nota2;
    cout << "Introduce la nota 3: "; cin >> nota3;
    cout << "Introduce la nota 4: "; cin >> nota4;

    resultado = (nota1 * 0.2) + (nota2 * 0.2) + (nota3 * 0.1) + (nota4 * 0.5);

    cout << "La nota definitiva es: " << resultado << endl;

    system("pause");
    return 0;
}