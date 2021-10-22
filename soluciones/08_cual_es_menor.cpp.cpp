//Determinar cuál de dos números es menor.

#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cout << "Introduce el numero uno: "; cin >> num1;
    cout << "Introduce el numero dos: "; cin >> num2;

    if (num1 < num2){
        cout << "El menor es el numero " << num1 << endl;
    }else if (num2 < num1){
        cout << "El menor es el numero " << num2 << endl;
    }else{
        cout << "Los numeros son iguales" << endl;
    }

    system("pause");
    
    return 0;
}