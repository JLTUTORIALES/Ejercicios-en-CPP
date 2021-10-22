/*RUA que permita calcular el promedio de notas (notas finaliza cuando el usuario registre
una nota = 0).*/

#include <iostream>
using namespace std;

int main(){

    float promedio = 0, nota;
    int cantidad = 0;
    
    while (true)
    {
        cout<<"Por favor introduzca una nota: "; cin>>nota;
        if (nota == 0) { break; } else {
            promedio += nota;
            cantidad ++;
        }
    }

    cout<<"El promedio de las notas es: "<<(promedio / cantidad)<<endl;

    system("pause");
    return 0;

}