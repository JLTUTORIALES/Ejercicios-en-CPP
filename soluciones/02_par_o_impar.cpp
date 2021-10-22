//RUA que lea un numero e imprima por pantalla si el número es par o impar
#include <iostream>
using namespace std;

int main(){

    int numero;
    cout<<"Por favor digite un numero: "; cin>>numero;

    if (numero % 2 == 0){ cout<<"El numero "<<numero<<" es par"<<endl; }
    else{ cout<<"El numero "<<numero<<" es impar"<<endl; }

    system("pause");
    return 0;
}