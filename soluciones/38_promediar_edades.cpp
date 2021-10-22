//Leer 3 edades, e imprimirlas junto con el promedio

#include <iostream>

using namespace std;

int main(){
    
    int edades[3], result;

    for (int i = 0; i < 3; i++){
        cout << "Introduce la edad correspondiente a la persona " << (i + 1) << ": ";
        cin >> edades[i];
    }
    cout << "\n\n";

    cout << "Las edades son: " << edades[0] << ", " << edades[1] << " y " << edades[2] << endl;
    cout << "El promedio de las edades es: " << (edades[0] + edades[1] + edades[2])/3 << endl << endl;

    
    system("pause");
    return 0;
}