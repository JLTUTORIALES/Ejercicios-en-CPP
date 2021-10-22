//RUA que muestre la suma de los números impares del 1 al 100

#include <iostream>
using namespace std;

int main(){

    int count = 0;
    for (int i = 1; i <= 100; i ++){
        if (i % 2 != 0){
            count += i;
        }
    }

    cout << "La suma de los numeros impares entre 1 y 100 es: " << count << endl;


    system("pause");
    return 0;
}