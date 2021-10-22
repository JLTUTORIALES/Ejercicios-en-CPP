/*RUA que lea 3 notas donde la primera nota equivale al 30%, la segunda al 30% y la tercera
al 40% la nota va de (1 a 5) y calcule la nota final o definitiva.*/

#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, resultado;

    cout << "Introduce la nota 1: "; cin >> nota1;
    cout << "Introduce la nota 2: "; cin >> nota2;
    cout << "Introduce la nota 3: "; cin >> nota3;

    resultado = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4);

    cout << "La nota definitiva es: " << resultado << endl;

    system("pause");
    return 0;
}