//RUA que imprima los números pares del 1 al 100

#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    system("pause");
    return 0;
}