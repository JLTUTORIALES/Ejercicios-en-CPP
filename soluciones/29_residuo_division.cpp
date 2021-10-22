//RUA que calcule el residuo de la división de 1 hasta 10 de un numero dado.

#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Introduce un numero: "; cin >> num;

    for (int i = 1; i <= 10; i++){
        cout << num << " % " << i << " = " << (num % i) << endl;
    }

    system("pause");
    return 0;
}