//Calcular el máximo común divisor de 2 números naturales, distintos de 0.

#include <iostream>
#include <unistd.h>

using namespace std;

double descomponer(){

    return 0;
}

int main(){

    int n1, n2, _min, _res, res;

    cout << "Por favor introduce el primer numero: "; cin >> n1;
    cout << "Por favor introduce el segundo numero: "; cin >> n2;

    _min = min(n1, n2);
    _res = max(n1, n2);

    do {
        res = _min;
        _min = _res % _min;
        _res = res;
    } while (_min != 0);

    cout << "M.C.D ( " << n1 << " , " << n2 << " ) = " << res << endl;

    system("pause");
    return 0;    
}