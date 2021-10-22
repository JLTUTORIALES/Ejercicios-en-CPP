//RUA que sume los números del 20 al 50

#include <iostream>
using namespace std;

int main(){

    int resultado = 0;

    for (int i = 20; i <= 50; i++){
        resultado += i;
    }

    cout << "El resultado de sumar numeros desde el 20 hasta el 50 es: "<<resultado<<endl;

    system("pause");    
    return 0;
}