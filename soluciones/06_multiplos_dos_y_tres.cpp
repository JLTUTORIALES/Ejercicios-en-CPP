//Imprimir y contar los múltiplos de 2 y de 3 que hay de 1 a 100

#include <iostream>
using namespace std;

int main(){

    int count = 0;
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0 && i % 3 == 0){
            cout << i << endl;
            count ++;
        }
    }

    cout << "Hay " << count << " numeros que son multiplos de 2 y de 3"<<endl;
    system("pause");

    return 0;
}