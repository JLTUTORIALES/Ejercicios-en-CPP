//RUA que imprima cuantos números impares hay del 1 al 100

#include <iostream>
using namespace std;

int main(){

    int count = 0;
    for (int i = 1; i <= 100; i ++){
        if (i % 2 != 0){
            count ++;
        }
    }

    cout << "Hay " << count << " numeros impares entre 1 y 100"<<endl;


    system("pause");
    return 0;
}