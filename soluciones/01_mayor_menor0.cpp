//RUA que muestre si el número es > < = 0

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Por favor introduce un numero: "; cin>>numero;

    if (numero > 0) { cout<<"El numero "<<numero<<" es mayor a 0"<<endl; }
    else if (numero < 0) { cout<<"El numero "<<numero<<" es menor a 0"<<endl; }
    else { cout<<"El numero es igual a 0"<<endl; }

    system("pause");
    return 0;
}