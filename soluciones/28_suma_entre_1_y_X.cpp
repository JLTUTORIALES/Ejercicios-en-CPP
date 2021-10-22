//RUA que calcule la suma de los números que hay desde 1 hasta un número introducido por teclado

#include <iostream>
using namespace std;

int main(){

    int num, result;

    cout << "Introduce un numero: "; cin >> num;
    result = 0;

    for (int i = 1; i <= num; i++){
        result += i;
    }

    cout << "Los suma de los numeros enteros entre 1 y " << num << " es: " << endl;
    cout << result << endl;

    system("pause");
    return 0;
}