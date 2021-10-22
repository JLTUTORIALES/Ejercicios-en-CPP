//RUA que calcule el factorial de un numero

#include <iostream>
using namespace std;

int main(){

    int num, result; string factorial;
    result = 1; factorial = "";

    cout << "Por favor introduce un numero: "; cin>>num;

    for (int i = 1; i <= num; i ++){
        result *= i;
        (i > 1) ? factorial += " X " + to_string(i) : factorial += "1";
    }

    cout << "\nEl factorial de " << num << " es: " << result << endl;
    cout << num << "! = " << factorial << endl << endl;

    system("pause");
    return 0;

}